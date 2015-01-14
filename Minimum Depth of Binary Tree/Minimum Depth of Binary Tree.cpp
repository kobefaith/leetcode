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
    int minDepth(TreeNode *root) {
        int left,right;
	    if(root == NULL)
		   return 0;
	    left = minDepth(root->left);
	    right = minDepth(root->right);
	    if(left == 0 && right == 0)
	        return 1;
	    else if(left == 0 || right == 0)
	        return left != 0 ? (left+1):(right+1);
	    else 
	        return left<=right? (left+1):(right+1);
    }
};