class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1 )
             return INT_MAX;
      long long a = dividend >= 0 ? dividend : -(long long)dividend;
       long long b = divisor >= 0 ? divisor : -(long long)divisor;
	// ��dividend = INT_MIN ʱ��divisor = -1 ʱ������������������long long
	long long result = 0;
	while (a >= b) {
		long long c = b;
		for (int i = 0; a >= c; ++i, c <<= 1) {			
			a -= c;
			result += 1 << i;			
		}
	}
    return ((dividend^divisor) >> 31) ? (-result) : (result);
    }
};