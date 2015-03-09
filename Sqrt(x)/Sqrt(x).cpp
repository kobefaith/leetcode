class Solution {
public:
    int sqrt(int x) {
        if(x <2)
		   return x;
	    int beg=1;
	    int end=x/2;
	    int last;
	    while(beg<=end){
	        int mid = beg+(end-beg)/2;
		    if(x/mid<mid){
		        end=mid-1;
		    }else if(x/mid>mid){
		        beg=mid+1;
		        last=mid;
		    }else
			   return mid;
	    }
	    return last;
    }
};