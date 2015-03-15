class Solution {
public:
    bool binary_search(vector<vector<int> > &matrix,int target,int begin,int end){
        if (begin == end && matrix[begin/matrix[0].size()][begin%matrix[0].size()] != target)
             return false;
        int mid = begin+(end-begin)/2;
        if (matrix[mid/matrix[0].size()][mid%matrix[0].size()] == target)
           return true;
        else if (matrix[mid/matrix[0].size()][mid%matrix[0].size()] > target){
            if (binary_search(matrix,target,begin,mid) == true)
                return true;
        }else{
            if (binary_search(matrix,target,mid+1,end) == true)
                return true;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        return binary_search(matrix,target,0,matrix[0].size()*matrix.size()-1);
        
    }
};
