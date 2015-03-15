class Solution {
public:
    int removeElement(int A[], int n, int elem) {
       int i = 0;
        int j = n-1; 
        if (n == 1)
            return A[0] == elem ?0:1;
			
        while (i < j){
            while (A[i] != elem && i < n)
                 i++;
            while (A[j] == elem && j >= 0)
                 j--;
			if (i < j){
				A[i]=A[i]^A[j];
				A[j]=A[i]^A[j];
				A[i]=A[i]^A[j];				
			}						
        }
		
        return j+1;
    }
};