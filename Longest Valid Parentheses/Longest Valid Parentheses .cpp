class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int> stk;
	   int max_len=0;
       int i=0;
       int last = -1;
  	   while(i<s.size()){
		  if(s[i] == '('){
			   stk.push(i);			
		  }else if(s[i] == ')'){
			if(!stk.empty()){
				stk.pop();
				if(!stk.empty())
					max_len = max_len >(i-stk.top())?max_len:(i-stk.top());
				else
					max_len = max_len > (i-last)?max_len:(i-last);
			}else{
			    last = i;
			}
		}
		i++;
      }
	return max_len;
    }
};