class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
	 int temp;
	 for (int i = 0; i < matrix.size()/2; i++){
		 for (int j = i; j < matrix[0].size()-i-1; j++){
				 temp = matrix[i][j];
				 matrix[i][j] = matrix[matrix.size()-1-j][i];
				 matrix[matrix.size()-1-j][i] = temp;

				 temp = matrix[matrix.size()-1-j][i];
				 matrix[matrix.size()-1-j][i] = matrix[matrix.size()-1-i][matrix.size()-1-j];
				 matrix[matrix.size()-1-i][matrix.size()-1-j] = temp;

				 temp = matrix[matrix.size()-1-i][matrix.size()-1-j];
				 matrix[matrix.size()-1-i][matrix.size()-1-j] = matrix[j][matrix.size()-1-i];
				 matrix[j][matrix.size()-1-i] = temp;
		 }
	 }

 }
};