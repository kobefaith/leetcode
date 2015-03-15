class Solution {
public:
    int atoi(const char *str) {
        int result = 0;
        int i = 0;
        int flag = 1;
        if (strlen(str) ==0)
           return 0;
       while ((str[i] > '9')||(str[i] < '0')){
             if (str[i] == '-')
                flag *= -1;
              i++;
       }
        while ((str[i] != '\n') && ((str[i] <= '9') && (str[i] >= '0'))){
            if (result > INT_MAX/10 || (result == INT_MAX/10 && (str[i]-'0') > INT_MAX%10))
                return flag == -1 ? INT_MIN : INT_MAX;
             result = result*10+(str[i]-'0');
             i++;
        }
		
        return flag*result;
    }
};