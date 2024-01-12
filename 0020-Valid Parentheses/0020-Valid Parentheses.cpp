class Solution {
public:
    bool isValid(string s) {
        stack<char> symbol;
        map<char, char> m = {{'}','{'}, {']','['}, {')','('}};
        for(int i=0; i<s.length(); i++){
            if(!m.count(s[i])) //表示是向右的symbol
                symbol.push(s[i]); //將向右的symbol推入stack
            else{ //表示是向左的symbol
                if(symbol.empty()) //若stakc為空，top()會error，所以一定得先判斷stack是否為空
                    return false;
                else if(symbol.top() == m[s[i]]) //若stack最上層的symbol跟hash table中的value一樣，表示valid
                    symbol.pop();
                else //若stack最上層的symbol跟hash table中的value不一樣，表示invalid
                    return false;
            }
        }
        if(!symbol.empty())
            return false;
        else
            return true;
    }
};