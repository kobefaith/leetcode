class Solution {
public:
    int jump(int A[], int n) {
        vector<int> B(n,0);
        int maxlen = A[0];
        int max=0;
        int i=1;
	    int j;
	    B[0] = 0;
    	while(i<n){
    	    j=i;
    	    max=0;
    	    while(j<=maxlen && j<n){
    	        B[j]=B[i-1]+1;
    	        if(A[j]+j>max)
    	        	max = A[j]+j;
			    j++;
		    }
		    i=j;
		    maxlen = max;
		    if(maxlen >= n-1 && i<n)
		    	return B[i-1]+1;

	    }	
        return B[n-1];
        
    }
};