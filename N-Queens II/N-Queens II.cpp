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
		    for(int k=0;k<index.size();k++){    //判断是否与前面的皇后相互攻击
		    	if(index[k][0] == i) //判断行是否冲突
		    		flag = 1;
			    if(index[k][1] == j)//判断列时候冲突
				    flag = 1;
			    if((i-j) == (index[k][0]-index[k][1]))//判断主对角线是否冲突
				    flag = 1;
			    if((i+j) == (index[k][0]+index[k][1]))//判断副对角线是否冲突
				    flag = 1;
		    }		
		    //将第j个皇后放入temp，并更新index数组。
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