class Solution {
public:
    string longestPalindrome(string s) {
        string temp;
        string result;
        int i = 0;
        int j;
        int max_len = 1;
        int start,end;
        if (s.size()== 1)
           return s;
		   
        while (i < s.size()){
            temp += s[i];
            temp += '*';
            i++;
        }
        for (i = 1; i < temp.size(); i++){
            j=1;
            while (j <= i){
                if(temp[i-j] != temp[i+j])
                    break;
                j++;
            }
            j -= 1;
            if (2*j+1 > max_len){
                max_len = 2*j+1;
                start = i-j;
                end = i+j;
            }
        }
        for (i = start; i <= end; i++){
            if (temp[i] != '*')
               result += temp[i];
        }
		
       return result; 
    }
};