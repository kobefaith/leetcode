class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        int min = A[0];
	    int max = A[0];
	    int i;
	    for( i=0;i<n;i++){
	        if(A[i]>max)
			   max = A[i];
		    if(A[i]<min)
			   min = A[i];
	    }
	    if(min >=2)
	       return 1;
	    int* count = new int[max-min+1];	
	    for( i=0;i<max-min+1;i++)
	    	count[i] = 0;
	    for( i=0;i<n;i++)
		    count[A[i]-min]++;	
	    for( i=0;i<max-min+1;i++)
	    	if(count[i] == 0 && (i+min) >0)			
			   return (i+min);
	    if(i == max-min+1 )
	       return  max+1;
	    
    }
};