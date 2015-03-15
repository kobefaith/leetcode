class Solution {
public:
    bool isPalindrome(int x) {
        int k = 1,i;
        int temp = x;
        int j = 1;
        int flag = 1;
        if (x < 0)
           return false;
        if (x == 0)
           return true;
		   
        while (temp > 0){
             if (temp/10 != 0 )
                k++;
             temp /=10;
        }
        temp = x;
      for (j = k-1; j >= (k%2 == 0?k/2 : (k-1)/2); j--){
           for (i = 0; i < j; i++)
               flag *= 10;
           if (x/flag != temp%10)
              return false;
           temp /= 10;
           x %= flag;
           flag= 1;
       }
	   
        return true;
    }
};