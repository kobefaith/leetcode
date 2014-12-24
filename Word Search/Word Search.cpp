class Solution {
public:
bool search(vector<vector<char> > &board,string word,int k,int line,int col ){	
	if(k == word.size())		
		return true;		
	if(line>=1 && board[line-1][col] == word[k]){
		char temp = board[line][col];
	    board[line][col] = '0';
		if(search(board,word,k+1,line-1,col) == true){
			board[line][col] = temp;
			return true;
		}
		board[line][col] = temp;
	}
	if(line<board.size()-1 && board[line+1][col] == word[k]){
		char temp = board[line][col];
	    board[line][col] = '0';
		if(search(board,word,k+1,line+1,col)==true){
			board[line][col] = temp;
			return true;
		}
		board[line][col] = temp;
	}
	if(col>=1 && board[line][col-1] == word[k]){
		char temp = board[line][col];
	    board[line][col] = '0';
		if(search(board,word,k+1,line,col-1)== true){
			board[line][col] = temp;
			return true;
		}
		board[line][col] = temp;
	}
	if(col<board[0].size()-1 && board[line][col+1] == word[k]){
		char temp = board[line][col];
	    board[line][col] = '0';
		if(search(board,word,k+1,line,col+1)== true){
			board[line][col] = temp;
			return true;
		}
		board[line][col] = temp;
	}
	return false;     
}
    bool exist(vector<vector<char> > &board, string word) {
        int i=0,j=0;	 
	    for(i=0;i<board.size();i++){
	        for(j=0;j<board[i].size();j++){	
	            if(board[i][j] == word[0]){	
	                if( search(board,word,1,i,j) == true)
	                   return true;
			 }
		 }
	 }
     return false;  
    }
};