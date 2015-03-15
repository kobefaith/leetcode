class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> result;
        if(matrix.empty())
            return result;
			
        int num=0;
        int total=0;
        int row = matrix.size();
        int col = matrix[0].size();
        while (total < row*col){
            //the top row 
            for (int i = num; i < col-num; i++){
                result.push_back(matrix[num][i]);
                total++;
			    if(total == row*col)
			       return result;
            }
            //the right columns
            for (int j = num+1;j < row-num-1; j++){
                result.push_back(matrix[j][col-num-1]);
                total++;
			    if(total == row*col)
			       return result;
            }
            //the bottom row
            for (int k = col-num-1; k >= num; k--){
                result.push_back(matrix[row-num-1][k]);
                total++;
			    if(total == row*col)
			       return result;
            }
            //the left columns
            for(int l = row-num-2; l > num; l--){
                result.push_back(matrix[l][num]);
                total++;
			    if(total == row*col)
			       return result;
            }
            num++;
        }
    }
};