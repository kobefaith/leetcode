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
    vector<TreeNode *> generateTrees(int n) {
        if (n == 0) return buildtree(1,0);
        return buildtree(1,n);
    }
    vector<TreeNode *>buildtree(int beg,int len){
        vector<TreeNode *> subtree;
        if (len == 0){
            subtree.push_back(NULL);
            return subtree;
        }
        for (int i = beg; i < beg + len; i++){
            vector<TreeNode *> left = buildtree(beg,i-beg);
            vector<TreeNode *> right = buildtree(i+1,beg+len-i-1);
            for (int j = 0; j < left.size(); j++){
                for (int k = 0; k < right.size(); k++){
                    TreeNode *root = new TreeNode(i);
                    root->left = left[j];
                    root->right = right[k];
                    subtree.push_back(root);
                }
            }
            
        }
        return subtree;
    }
};