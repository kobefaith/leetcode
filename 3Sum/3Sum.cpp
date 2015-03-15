class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
         int index=0;
		 int i,j,k;
         vector<vector<int>>::iterator iter;		
		 vector<int> temp;
         vector<vector<int>> re;
         if(num.size() < 3)
               return re;
			   
         sort(num.begin(),num.end());
         for (i = 0; i < num.size()-2; i++){
             if (i > 0 && num[i-1] == num[i]) continue;
             j = i+1;
			 k = num.size()-1;
			 while (j<k){
				 if (num[i]+num[j]+num[k] > 0){
				      while (k>0 && num[k] == num[k-1]) k--;
				       k--;
				 }else if (num[i]+num[j]+num[k] < 0){
				     while (j < num.size()-1 && num[j] == num[j+1]) j++;
					 j++;
				 }else {
					 re.push_back({num[i],num[j],num[k]});
					 while (j < num.size()-1 && num[j] == num[j+1]) j++; 
                     while (k > 0 && num[k] == num[k-1]) k--; 
					 j++;
					 k--;
				 }
			 }
         }
		 
         return re;
    }
};