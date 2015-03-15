class Solution {
public:
    void Putqueens(int i,int n,vector<vector<string> > &result,vector<vector<int>> &index,vector<string> &temp){
	if( i== n){
		result.push_back(temp);
		return;
	}
	
	for (int j = 0; j < n; j++){
		int flag = 0;
		for (int k = 0; k < index.size(); k++){    //判断是否与前面的皇后相互攻击
			if (index[k][0] == i) //判断行是否冲突
				flag = 1;
			if (index[k][1] == j)//判断列时候冲突
				flag = 1;
			if ((i-j) == (index[k][0]-index[k][1]))//判断主对角线是否冲突
				flag = 1;
			if ((i+j) == (index[k][0]+index[k][1]))//判断副对角线是否冲突
				flag = 1;
		}		
		//将第j个皇后放入temp，并更新index数组。
		if (flag == 0){
			vector<int> pos;
			pos.push_back(i);
			pos.push_back(j);
			index.push_back(pos);			
			string line;
			for (int k = 0; k < n; k++)
				line += '.';
			line[j] = 'Q';
			temp.push_back(line);
			Putqueens(i+1,n,result,index,temp);
			line[j] = '.';
			temp.pop_back();
			index.pop_back();
		}
	}
}
vector<vector<string> > solveNQueens(int n) {
	vector<vector<string> > result;
	vector<vector<int> > index;
	vector<string> temp; 
	
	Putqueens(0,n,result,index,temp);
	
	return result;
}
};