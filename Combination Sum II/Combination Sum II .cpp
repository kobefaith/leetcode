class Solution {
public:
    void dfs(vector<int> &cand,int gap,vector<vector<int> > &result,vector<int> temp,vector<int> index){
    if(gap == 0){
        result.push_back(temp);
        return;
    }
    for(int i=0;i<cand.size();i++){
        if(gap < cand[i])
           return;
        else{
			if(temp.size() == 0){
				temp.push_back(cand[i]);
				index[i] = -1;
			}else if((index[i] != -1)&& cand[i] >= temp[temp.size()-1]){
				index[i] = -1;				
				temp.push_back(cand[i]);
			}else
				continue;
            dfs(cand,gap-cand[i],result,temp,index);
			temp.erase(temp.end()-1);
			index[i] = cand[i];
        }
    }
}
vector<vector<int> > combinationSum2(vector<int> &num, int target) {
	vector<vector<int>> result;
	vector<int> temp;
	vector<int> index;
	sort(num.begin(),num.end());
	index = num;
	dfs(num,target,result,temp,index);
	sort(result.begin(),result.end());
	result.erase(unique(result.begin(),result.end()),result.end());
	return result;    
}
};