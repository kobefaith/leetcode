/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    ListNode *findmiddle(ListNode *head){
        if (head == NULL){
            return NULL;
        }
        ListNode *slow = head;
        ListNode *fast = head->next;
        if(fast != NULL && fast->next != NULL && fast->next->next == NULL){
            return slow;
	    }
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    TreeNode *sortedListToBST(ListNode *head) {
        ListNode *middle =findmiddle(head);
        TreeNode *root = new TreeNode(-1);
        TreeNode *right;
        if (head == NULL ){
            return NULL;
        }
        if (head->next == NULL){
            root->val = middle->val;
            root->left = NULL;
            root->right = NULL;
            return root;
        }
        if (middle->next == NULL){
            root->val = middle->val;
		    right = NULL;
	    }else{
	        root->val = middle->next->val;
		    right = sortedListToBST(middle->next->next);
	    }	
	    middle->next = NULL;
	    TreeNode *left = sortedListToBST(head);
	    root->left = left;
	    root->right = right;
	    return root;
    }
};