class Solution {
public:
    void Binary_search(int A[],int i,int j,int &left,int &right,int val){
        if (i == j){
            if (A[i] == val){
                left = left < i ? left : i;
                right = right > i ? right : i;
            }else{
                left = INT_MAX;
                right = -1;
                
            }
        }else if (i == j-1){
            if (A[i] == val && A[j] != val){
                right = i;
            }else if (A[i] != val && A[j] == val){
                left = j;
            }else if (A[i] == val && A[j] == val){
                left = i;
                right = j;
            }else{
                left = INT_MAX;
                right = -1;
            }
        }else{
            int left1 = INT_MAX,right1 = -1;
            int mid = i+(j-i)/2;
            Binary_search(A,i,mid,left,right,val);
            Binary_search(A,mid+1,j,left1,right1,val);
            left = left >= left1 ? left1 : left ;
            right = right >= right1 ? right : right1 ;
        }
    }
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> vec;
        int left = INT_MAX;
        int right = -1;
        Binary_search(A,0,n-1,left,right,target);
        if (left == INT_MAX ){
            if (right == -1)
               left = -1;
            else
               left = right;
        }else{
            if (right == -1)
               right = left;
        }
        vec.push_back(left);
        vec.push_back(right);
		
        return vec;
    }
};