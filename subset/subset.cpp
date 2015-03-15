class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int>> result;
    	vector<int> temp;
    	sort(S.begin(),S.end());
    	for (int i = 0; i <= S.size(); i++){
    	    if(i == 0)
    	       result.push_back(temp);
    	   else
    	       dfs(S,result,i,0,temp);
    	}
		
    	return result;
        
    }
    void dfs(vector<int> &nums,vector<vector<int>> &result,int k,int turn,vector<int> &temp){
        if(turn == k){
            result.push_back(temp);
        }
        for (int i = 0;i < nums.size(); i++){
            if (temp.empty()){
                temp.push_back(nums[i]);
                dfs(nums,result,k,turn+1,temp);
                temp.pop_back();
            }else if (nums[i] > temp[turn-1]){
                temp.push_back(nums[i]);
                dfs(nums,result,k,turn+1,temp);
                temp.pop_back();
            }
        }
    }
};