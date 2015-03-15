class Solution {
public:
    void Putqueens(int i,int n,vector<vector<string> > &result,vector<vector<int>> &index,vector<string> &temp){
	if( i== n){
		result.push_back(temp);
		return;
	}
	
	for (int j = 0; j < n; j++){
		int flag = 0;
		for (int k = 0; k < index.size(); k++){    //�ж��Ƿ���ǰ��Ļʺ��໥����
			if (index[k][0] == i) //�ж����Ƿ��ͻ
				flag = 1;
			if (index[k][1] == j)//�ж���ʱ���ͻ
				flag = 1;
			if ((i-j) == (index[k][0]-index[k][1]))//�ж����Խ����Ƿ��ͻ
				flag = 1;
			if ((i+j) == (index[k][0]+index[k][1]))//�жϸ��Խ����Ƿ��ͻ
				flag = 1;
		}		
		//����j���ʺ����temp��������index���顣
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