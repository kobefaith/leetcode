class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int result = 0;
        int len = 0;
        int i = 0;
		
        while (i < strlen(s)){
            while ((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A'&& s[i] <= 'Z')){
                i++;
                len++;
            }
            result = len;
            while (s[i] == ' '){
               len =0;
               i++; 
            }
        }
		
        return result;
    }
};