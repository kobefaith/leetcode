class Solution {
public:
     int find(int *a,int begin,int end ,int val)
    {
	    int mid = begin +(end-begin)/2;
	    if (begin == end ){
		    if (a[begin] < val)
			   return begin+1;
	     	return begin;
     	}		    
     	if (a[mid] == val){
	       return mid;
	    }else if (a[mid] > val){
	       return  find(a,begin,mid,val);
  	    }else{
	       return  find(a,mid+1,end,val);
	    }
    }
    int searchInsert(int A[], int n, int target) {
        return find(A,0,n-1,target);
    }
};