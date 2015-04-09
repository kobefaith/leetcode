class Solution {
public:
    int maxProduct(int A[], int n) {
        int max = A[0];
        vector<vector<int>> flag(n,vector<int>(2,1));
        flag[0][0] = A[0];
        flag[0][1] = A[0];
        if (n == 1){
            return A[0];
        }
        for (int i = 1; i < n; i++){
            if (flag[i-1][0] == 0 || flag[i-1][1] == 0){
                flag[i][0] = A[i];
                flag[i][1] = A[i];
            }else if (A[i] < 0){
                if (flag[i-1][1] > 0){
                    flag[i][0] = A[i];
                    flag[i][1] = A[i] * flag[i-1][0];
                }else{
                    if (flag[i-1][0] > 0){
                        flag[i][0] = flag[i-1][1] * A[i];
                        flag[i][1] = flag[i-1][0] * A[i];
                    }else if (flag[i-1][0] < 0){
                        flag[i][0] = flag[i-1][1] * A[i];
                        flag[i][1] = A[i];
                    }
                }
            }else if (A[i] > 0){
                if (flag[i-1][0] < 0){
                    flag[i][0] = A[i];
                }else{
                    flag[i][0] = A[i] * flag[i-1][0];
                }
                flag[i][1] = A[i] * flag[i-1][1];
                
            }else{
                flag[i][0] = 0;
                flag[i][1] = 0;
            }
            if (flag[i][0] > max){
                max = flag[i][0];
            }
        }
        
        return max;
    }
};