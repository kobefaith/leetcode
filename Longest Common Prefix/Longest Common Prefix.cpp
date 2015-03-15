class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        string result;
        int i,j;
        int flag = 1;
        if (strs.size() == 0)
           return "";
		   
        for (i = 0; i < strs[0].size(); i++){
            flag = 1;
            for (j = 1; j < strs.size(); j++){
                if (strs[j][i] != strs[0][i]){
                     flag = 0;
                     return result;
                }
            }
            if(flag)
                result += strs[0][i];
        }
		
        return strs[0];
    }
};