class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, int> m;
        string s;
        int group = 0;
        for (int i = 0; i < strs.size(); i++) {
            s = strs[i];
            sort(s.begin(),s.end()); //對字串排序，ex: eat -> aet
            if (!m.count(s)) { 
                m[s] = group++; 
                ans.push_back({ strs[i] });
            }
            else 
                ans[m[s]].push_back(strs[i]); //找到排序後重複的，直接取value值，看它屬於哪個group
        }
        return ans;
    }
};