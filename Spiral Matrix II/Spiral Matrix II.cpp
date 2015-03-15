class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int>> result(n,vector<int>(n,0));
        if(n == 0)
        	return result;
	    int num = 1;
	    int turn = 0;
	    while(true){
	        //fill the top row
	        for (int i = turn; i < n-turn; i++){
	            result[turn][i] = num++;
	            if(num > n*n)
	               return result;
	        }
	        //fill the right col
	        for (int j = turn+1; j < n-turn-1; j++){
	            result[j][n-turn-1] = num++;
	            if(num > n*n)
	               return result;
	   		}
	   		//fill the bottom row
	   		for (int k = n-turn-1; k >= turn; k--){
	   		    result[n-turn-1][k] = num++;
	   		    if(num > n*n)
	   		    	return result;
		    }
		    //fill the left col
		    for (int l = n-turn-2; l > turn; l--){
		        result[l][turn] = num++;
		        if(num > n*n)
		          return result;
		    }
		    turn++;
	  }
    }
};