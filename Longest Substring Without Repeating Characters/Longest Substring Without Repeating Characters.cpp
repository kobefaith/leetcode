class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int index[96];
        int start = 0,max_len = 0;
        int i = 0;
        if (s.size() == 0)
           return 0;
		   
        for (i = 0; i < 96; i++)
			index[i] = -1;
		i = 0;		
        while (i < s.size()){
                if (index[s[i]-' '] == -1){
                    index[s[i]-' '] = i;
                    i++;
                }else {
                   if ((i-start) > max_len)
                       max_len = i-start;
                   if (start < (index[s[i]-' ']+1))
						start = index[s[i]-' ']+1;
                   index[s[i]-' ']= i;
                   i++;
                }
        }
        if ((i-start) > max_len)
           max_len = i-start;
		   
        return max_len;
    }
};