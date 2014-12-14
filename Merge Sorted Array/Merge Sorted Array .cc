class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int k=m;
        int i=0,j=0;
        while(i<m && j<n){
            if(A[i]<B[j]){
                A[k] = A[i];
                k++;
                i++;
            }else{
                A[k] = B[j];
                j++;
                k++;
            }
        }
        if(j<n){
            for(;j<n;j++){
                A[k] = B[j];
                k++;
            }
        }
        if(i<m){
            for(j=i;j<m;j++){
                A[k] = A[j];
				k++;
            }
        }
		for(i=0,j=m;i<m+n;i++,j++)
			A[i] = A[j];
    }
};