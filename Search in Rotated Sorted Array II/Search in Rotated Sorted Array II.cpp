class Solution {
public:
    bool search(int A[], int n, int target) {
        int beg=0;
        int end=n-1;
        int mid;
        while(beg<=end){
            mid=beg+(end-beg)/2;
            if(target<A[mid]){
                if(A[mid]>=A[beg] && target<A[beg])
                    beg=mid+1;
                else
                    end=mid-1;
            }else if(target>A[mid]){
                if(A[mid]<=A[end] && target>A[end])
                    end=mid-1;
                else
                    beg=mid+1;
            }else
                return true;
        }
        return false;
    }
};