class Solution {
public:
    int reverse(int x) {
       int result = 0;
       int temp = 0;
       int flag = 1;
       if (x < 0){
           flag = -1;
           x = -1*x;
       }
       while (x > 0){
          temp = x%10;
          x = x/10;
          if (result > 214748364)
               return 0;
          result *= 10;
          if (result > 2147483647-temp)
              return 0;
           result += temp;
       }
	   
       return result*flag;
    }
};