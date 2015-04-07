class Solution {
public:
    int singleNumber(int A[], int n) {
        int count[32];
        int result = 0;
        for (int i = 0; i < 32; i++){
            count[i] = 0;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < 32 ; j++){
                count[j] += (A[i]>>j) & 1;
                count[j] %= 3;
            }
        }
        for (int i = 31; i >= 0; i--){
            result *= 2;
            result += count[i];
        }
        return result;
    }
};