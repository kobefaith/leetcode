class Solution {
public:
    int singleNumber(int A[], int n) {
        int x = A[0];
        for (int i = 1; i < n; ++i)
           x ^= A[i];
        return x;
    }
};