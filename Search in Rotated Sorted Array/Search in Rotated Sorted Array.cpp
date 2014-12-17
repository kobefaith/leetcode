class Solution {
public:
int find(int *a,int begin,int end ,int val)
{
	int mid = begin +(end-begin)/2;
	if(begin == end ){
		if(a[begin] != val)
			return -1;
		return begin;
	}		    
	if(a[mid] == val){
	     return mid;
	}else if(a[mid] > val){
		if(a[mid] >= a[begin] && val < a[begin])
			return  find(a,mid+1,end,val);
		else
			return  find(a,0,mid,val);
	}else{
		if(a[mid] < a[begin] && val >= a[begin])
			return  find(a,begin,mid,val);			
		else 
			return  find(a,mid+1,end,val);
	}
}
    int search(int A[], int n, int target) {
        int result;
        result = find(A,0,n-1,target);
        return result;
        
    }
};