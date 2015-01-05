/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool RecordPathSum(TreeNode *root, int sum,vector<vector<int> > &result,vector<int> temp) {
        if(root == NULL)
             return false;
        bool right,left;
	    if(root->left == NULL && root->right == NULL ){
	        if(sum == root->val){
	            temp.push_back(root->val);
			    result.push_back(temp);
			    return true;
		    }else
			    return false;
	    }
	    temp.push_back(root->val);	 
	    left = RecordPathSum(root->left,sum-root->val,result,temp);
	    right = RecordPathSum(root->right,sum-root->val,result,temp);
	    if(!left && !right){
	        temp.pop_back();
		    return false;
	    }else
		   return true;
 }
 vector<vector<int> > pathSum(TreeNode *root, int sum) {
	 vector<vector<int> > result;
	 vector<int>  temp;
	 if(root == NULL )
		 return result;
	 RecordPathSum(root,sum,result,temp);
	 return result;
        
 }
};