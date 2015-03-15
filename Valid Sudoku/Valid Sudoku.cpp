class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        string str[10];
        int i = 0,j = 0;
		
        for (i = 0; i < 9; i++){
            for (j = 0; j < 9; j++){
                if (board[i][j] != '.'){
                    int pos = (i/3)*3+j/3;
                    if (str[board[i][j]-'0'].find('0'+i) != std::string::npos){
                        return false;
                    }else{
                        str[board[i][j]-'0'] += ('0'+i);
                    }
                    if (str[board[i][j]-'0'].find('a'+j) != std::string::npos){
                        return false;
                    }else{
                        str[board[i][j]-'0'] += ('a'+j);
                    }
                    if (str[board[i][j]-'0'].find('A'+pos) != std::string::npos){
                        return false;
                    }else{
                        str[board[i][j]-'0'] += ('A'+pos);
                    }
                }
            }
        }
		
        return true;
        
    }
};