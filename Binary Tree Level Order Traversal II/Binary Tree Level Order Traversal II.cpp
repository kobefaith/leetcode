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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
       vector<vector<int> > result;
       vector<vector<int> > reverse;
	   vector<int> temp;
	   queue<TreeNode*> qu;
       TreeNode *pre = root;
	   TreeNode *index ;
	   TreeNode *cur ;
	   
	   if(root == NULL)
		   return result;
	   qu.push(root);
	   while(!qu.empty()){
	       do{
	           index = qu.front();
	           qu.pop();
			   temp.push_back(index->val);
			   if(index->left != NULL){
			   	   qu.push(index->left);
			   	   cur = index->left;
			   }
			   if(index->right != NULL){
               	   qu.push(index->right);
               	   cur = index->right;
			   }
		   }while(index != pre);
	       result.push_back(temp);
		   temp.clear();
		   pre = cur;		
	  }
	  for(int i = result.size()-1;i>=0;i--)
	       reverse.push_back(result[i]);
      return reverse; 
    }
};