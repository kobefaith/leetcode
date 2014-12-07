class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
       int index=0;
		 int i,j,k,l;
         vector<vector<int>>::iterator iter;		
         vector<vector<int>> re;
         if(num.size()<4)
               return re;
         sort(num.begin(),num.end());
		 for(l=0;l<num.size()-3;l++){
         for(i=l+1;i<num.size()-2;i++){
             j=i+1;
			 k=num.size()-1;
			 while(j<k){
				 if(num[i]+num[j]+num[k]>target-num[l]){
				       k--;
				 }else if(num[i]+num[j]+num[k]<target-num[l]){
					 j++;
				 }else{
					 re.push_back({num[l],num[i],num[j],num[k]});
					 j++;
					 k--;
				 }
			 }
         }
		 }
         sort(re.begin(),re.end());
         iter=unique(re.begin(),re.end()); 
         re.erase(iter,re.end());
         return re;
    }
};