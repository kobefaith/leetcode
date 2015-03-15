/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL)
            return NULL;
			
        ListNode *pre = head;
        ListNode *cur = head;
        while (cur != NULL){
            pre = pre->next;
            cur = cur->next;
            if (cur != NULL)
               cur = cur->next;
            else
               return NULL;
            if (cur == pre){
                cur = head;
                while (pre != cur){
                    pre = pre->next;
                    cur = cur->next;
                }
                return cur;
            }
        }
		
        return NULL;
        
    }
};