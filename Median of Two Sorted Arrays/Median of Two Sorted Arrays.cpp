class Solution {
public:
    int  findMedian(int A[], int m, int B[], int n,int k)  {
        int index_a,index_b;
        if (m > n) return findMedian(B,  n, A, m, k);
        if (m == 0 )
           return B[k-1];
        if(k == 1)
           return (A[0] <B[0])?A[0]:B[0];
		   
        index_a = (k/2 < m) ? k/2 : m;
        index_b = k-index_a;
       if (A[index_a -1] < B[index_b -1]){
            findMedian(A+index_a, m-index_a, B, n,k-index_a);
        }else if (A[index_a -1] > B[index_b -1]){
            findMedian(A, m, B+index_b,  n-index_b, k-index_b);
        }else
            return A[index_a -1];
    }
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        
        if ((m+n)%2 == 0){
            return (findMedian(A,m,B,n,(m+n)/2)+findMedian(A,m,B,n,(m+n)/2+1))/2.0;
        }else{ 
             return findMedian(A,m,B,n,(m+n)/2+1);
        }
        
    }
};