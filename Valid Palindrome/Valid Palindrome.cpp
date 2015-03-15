class Solution {
public:
    bool isPalindrome(string s) {
       string temp;
       int i = 0,j;
       if (s.size() == 0)
	      return true;
       for (i; i < s.size(); i++){
	      if ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= '0'&& s[i] <= '9'))
		      temp += s[i];
	      else if (s[i] >= 'A' && s[i] <= 'Z'){
		      temp += s[i]+32;
	      }
       }   
       i = 0;
       j = temp.size()-1;
       while (i < j){
	      if (temp[i] != temp[j])
		      return false;
	      i++;
	      j--;
       }
	   
      return true; 
    }
};