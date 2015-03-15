class Solution {
public:
    int trap(int A[], int n) {
        int max = 0; 
		
	    for (int i = 0; i < n; i++)
		    if (A[i] > A[max]) max = i;
	    int water = 0;
	    for (int i = 0, peak = 0; i < max; i++)
		    if (A[i] > peak) peak = A[i];
		    else water += peak - A[i];
	    for (int i = n - 1, top = 0; i > max; i--)
		    if (A[i] > top) top = A[i];
		    else water += top - A[i];
			
	    return water;
    }
};