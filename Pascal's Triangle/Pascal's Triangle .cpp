class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > result;
        vector<int> temp;
        if(numRows == 0)
           return result;
		   
        result.push_back(vector<int>(1,1));
        for (int i = 2; i <= numRows; i++){
            temp.clear();
            temp.push_back(1);
            for (int j = 1; j < i-1; j++){
                temp.push_back(result[i-2][j]+result[i-2][j-1]);
            }
            temp.push_back(1);
            result.push_back(temp);
        }
		
       return result; 
    }
};