class Solution {
public:
    int totalNQueens(int n) {
        int result = 0;
	    vector<vector<int> > index;	
	    Putqueens(0,n,result,index);
	    return result;
    }
    void Putqueens(int i,int n,int &result,vector<vector<int>> &index){
        if( i== n){
            result++;
		    return;
	    }
	    for(int j=0;j<n;j++){
	        int flag = 0;
		    for(int k=0;k<index.size();k++){    //�ж��Ƿ���ǰ��Ļʺ��໥����
		    	if(index[k][0] == i) //�ж����Ƿ��ͻ
		    		flag = 1;
			    if(index[k][1] == j)//�ж���ʱ���ͻ
				    flag = 1;
			    if((i-j) == (index[k][0]-index[k][1]))//�ж����Խ����Ƿ��ͻ
				    flag = 1;
			    if((i+j) == (index[k][0]+index[k][1]))//�жϸ��Խ����Ƿ��ͻ
				    flag = 1;
		    }		
		    //����j���ʺ����temp��������index���顣
		    if(flag == 0){
		        vector<int> pos;
			    pos.push_back(i);
			    pos.push_back(j);
			    index.push_back(pos);			
			    Putqueens(i+1,n,result,index);			
			    index.pop_back();
		    }
	   }
   }
};