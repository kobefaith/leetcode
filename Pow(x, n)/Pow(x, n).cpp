class Solution {
public:
    double pow(double x, int n) {
        double result = 1.0;
        int flag = 0;
        if (n < 0){
            flag = 1;
            n *= -1;
        }else if (n == 0)
           return 1;
        else if (n == 1)
            return x;
        if (n%2 == 1){
           result = x;
           n--;
        }
        if (flag == 0)
           return result*pow(x*x,n/2);
        else 
           return 1.0/(result*pow(x*x,n/2));
    }
};