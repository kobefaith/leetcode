class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int>> result;
	    vector<int> temp;
	    if(n==0)
	      return result;
	    fillcombine(n,k,0,result,temp);
	    return result;
    }
    void fillcombine(int n,int k,int turn,vector<vector<int> > &result,vector<int> &temp){
        if(turn == k){
            result.push_back(temp);
            return;
        }
        for(int i=1;i<=n;i++){
            if(temp.empty()){
                temp.push_back(i);
			    fillcombine(n,k,turn+1,result,temp);
			    temp.pop_back();
		    }else if(i>temp[turn-1]){
			    temp.push_back(i);
			    fillcombine(n,k,turn+1,result,temp);
			    temp.pop_back();
		    }
        }
    }
};