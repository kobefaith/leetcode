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
    bool travel(TreeNode *root,vector<int> &result){
        bool left,right;
        if(root == NULL)
            return true;
        left = travel(root->left,result);
        if(result.size() != 0){
            if(result[result.size()-1] >= root->val)
               return false;
        }
        result.push_back(root->val);
       right = travel(root->right,result);
       if(left == true && right == true)
          return true;
       else 
          return false;
    }
    bool isValidBST(TreeNode *root) {
        vector<int> result;
        return travel(root,result);
        
    }
};