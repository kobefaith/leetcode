class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n == 0)
           return 0;
        int i=1;
  	    int index =0;
	    int flag = 0;
	    while(i<n){
		   while(A[index] == A[i]){
		       i++;
			   flag = 1;
		   }
		   if(flag == 1){
			  A[++index] = A[i-1];
			  flag = 0;
		    }else
			  A[++index] = A[i++];
	   }
       return index+1;    
    }
};