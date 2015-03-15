class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int i = 0;
        while (i < s.size()){
            if (s[i] == '{'||s[i] == '('||s[i] == '['){
                stk.push(s[i]);
                i++;
            }else if (s[i] == '}'||s[i] == ')'||s[i] == ']'){
                if (stk.empty())
					return false;
                if ((s[i] == '}'&& stk.top() == '{')||(s[i] == ')'&& stk.top() == '(')||(s[i] == ']'&& stk.top() == '[')){
                   stk.pop();
                   i++;
                }else 
                    return false;
            }else
                i++;
            
        }
        if (stk.empty())
            return true;
        else
            return false;
    }
};