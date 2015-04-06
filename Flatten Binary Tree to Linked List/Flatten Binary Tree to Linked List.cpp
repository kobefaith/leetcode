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
    void flatten(TreeNode *root) {
        vector<TreeNode*> trav;
        if (root == NULL){
            return ;
        }
        TreeNode *cur = root;
        travel(root,trav);
        for(int i = 1; i < trav.size(); i++){
            cur->right = trav[i];
            cur = cur->right;
        }
    }
    void travel(TreeNode *root,vector<TreeNode*> &trav){
        if (root == NULL){
            return ;
        }
        trav.push_back(root);
        travel(root->left,trav);
        travel(root->right,trav);
        root->left = NULL;
        root->right = NULL;
    }
};