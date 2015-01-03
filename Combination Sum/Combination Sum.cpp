class Solution {
public:
    void dfs(vector<int> &cand,int gap,vector<vector<int> > &result,vector<int> temp){
    if(gap == 0){
        result.push_back(temp);
        return;
    }
    for(int i=0;i<cand.size();i++){
        if(gap < cand[i])
           return;
        else{
			if(temp.size() == 0)
				temp.push_back(cand[i]);
			else if(cand[i] >= temp[temp.size()-1])
				temp.push_back(cand[i]);
			else
				continue;
            dfs(cand,gap-cand[i],result,temp);
			temp.erase(temp.end()-1);
        }
    }
   }
vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
	vector<vector<int>> result;
	vector<int> temp;
	sort(candidates.begin(),candidates.end());
	dfs(candidates,target,result,temp);
	return result;    
}
};