class Solution {
public:
    int maxSubArray(int A[], int n) {
        vector<int> dp;
	    int max ;	
	    dp.push_back(A[0]);
	    max = A[0];
	    for (int i = 1; i < n; i++){
	        if (dp[i-1] < 0)
			   dp.push_back(A[i]);
		    else
			   dp.push_back(dp[i-1]+A[i]);
		    if (dp[i] > max)
			   max = dp[i];
	    }
		
	    return max;
        
    }
};