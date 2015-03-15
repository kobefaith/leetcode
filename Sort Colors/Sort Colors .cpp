class Solution {
public:
    void sortColors(int A[], int n) {
        int red = 0;
        int white = 0;
        int blue = 0;
        int i;
        for (i = 0; i < n; i++){
            if (A[i] == 0)
               red++;
            else if (A[i] == 1)
               white++;
            else
               blue++;
        }
        i=0;
        while (i < n){
            if (i < red)
               A[i] = 0;
            else if (i >= red && i < ed+white)
               A[i] = 1;
            else
               A[i] = 2;
            i++;
        }
    }
};