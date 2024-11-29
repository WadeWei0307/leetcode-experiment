class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        if(n==0)
            return ans;
        else if(n>=1){
            ans[1]=1;
        }
        for(int i=2; i<=n; i++){
            if(i%2==0)
                ans[i] = ans[i/2]; //110(6)/2=11(3)
            else
                ans[i] = ans[i-1]+1; //if odd always will be previous value plus 1
        }
        return ans;
    }
};