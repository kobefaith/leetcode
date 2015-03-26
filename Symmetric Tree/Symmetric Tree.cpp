 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        vector<TreeNode*> vec;
        int size;
        vector<int> temp;
        if (root == NULL)
             return true;
        vec.push_back(root);
        size = vec.size();
        while(!vec.empty()){
            size = vec.size();
            int i= 0;
            int j = size-1;
            while(i <= j){
                if(vec[i]->left != NULL && vec[j]->right != NULL && vec[i]->left->val != vec[j]->right->val){
                    return false;
                }else if((vec[i]->left != NULL && vec[j]->right == NULL )||(vec[i]->left == NULL && vec[j]->right != NULL)){
                    return false;
                }
                if(vec[i]->right != NULL && vec[j]->left != NULL && vec[i]->right->val != vec[j]->left->val){
                    return false;
                }else if((vec[i]->right != NULL && vec[j]->left == NULL )||(vec[i]->right == NULL && vec[j]->left != NULL)){
                    return false;
                }
                i++;
                j--;
            }
            for(i = 0; i < size; i++){
                if (vec[i]->left != NULL){
                    vec.push_back(vec[i]->left);
                }
                if (vec[i]->right != NULL){
                   vec.push_back(vec[i]->right); 
                }
            }
            for(i = 0; i < size; i++){
                vec.erase(vec.begin());
            }
            
        }
        return true;
    }
};