class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int result = 1;
        int i;
        if(n == 0)
           return 0;
        for(i=1;i<n;i++){
            if(A[i] != A[i-1]){
                A[result]=A[i];
                result++;
            }
        }
        return result;
    }
};