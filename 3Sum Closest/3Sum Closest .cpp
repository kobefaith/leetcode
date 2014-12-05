class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
       int index=0;
		 int i,j,k;
		 int distance =INT_MAX;       
         int sum;
         sort(num.begin(),num.end());
         for(i=0;i<num.size()-2;i++){
			 j=i+1;
			 k=num.size()-1;
			 while(j<k){
				 if(num[i]+num[j]+num[k]-target>0){
					   if(num[i]+num[j]+num[k]-target<distance){
						   distance=num[i]+num[j]+num[k]-target;
						   sum =num[i]+num[j]+num[k]; 
					   }
					   k--;
				 }else if(num[i]+num[j]+num[k]-target<0){
					 if(target - (num[i]+num[j]+num[k])<distance){
						   distance=target-(num[i]+num[j]+num[k]);
						   sum =num[i]+num[j]+num[k];
					 }
					 j++;
				 }else{	
					 return target;						 
				 }
			 }

         }
         return sum; 
    }
};