class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
         vector<vector<int> > result;
         sort(S.begin(),S.end());
         vector<int> temp;
         dfs(S,result,temp,0);
         return result;
    }
    void dfs(vector<int> &S,vector<vector<int> > &result,vector<int> temp,int turn){
        result.push_back(temp);
        for (int i = turn; i < S.size(); i++){
            temp.push_back(S[i]);
            dfs(S,result,temp,i+1);
            temp.pop_back();
        }
        
    }
};