class Solution {
public:
    void sortColors(int A[], int n) {
        int red = 0;
	    int temp;
	    if (n == 1)
	       return ;
	    for (int i = 0; i < n; i++){
	        if (A[i] == 0){
	            temp = A[red];
			    A[red] = A[i];
			    A[i] = temp;
			    red++;
		    }
	    }	
	    for (int i = red; i < n; i++){
	        if (A[i] == 1){
	            temp = A[red];
	            A[red] = A[i];
			    A[i] = temp;
			    red++;
		    }
	    }
    }
};