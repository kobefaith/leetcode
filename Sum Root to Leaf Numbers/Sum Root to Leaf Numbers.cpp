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
    int sumNumbers(TreeNode *root) {
        int result = 0;
        if(root == NULL){
            return result;
        }
        pathsum(root,0,result);
        return result;
    }
    void pathsum(TreeNode *root, int sum, int &result){
        if (root->left == NULL && root->right == NULL){
            sum *= 10;
            sum += root->val;
            result += sum;
            return;
        }
        if (root->left != NULL){
            pathsum(root->left,sum*10+root->val,result);
        }
        if (root->right != NULL){
           pathsum(root->right,sum*10+root->val,result); 
        }
        
    }
};