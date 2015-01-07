class Solution {
public:
    bool canJump(int A[], int n) {
        int i =0;
	    int max=0;
	    for(i=0;i<n;i++){
	        if(A[i] == 0 && max <= i && i <n-1)
			    return false;
	        if(i+A[i]>max)
			   max = i+A[i];
	    }
	    if(max >=n-1)
		    return true;
	    else
		    return false;
    }
};