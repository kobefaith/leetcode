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
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode *pre = head;
        ListNode *cur = head;
        while(cur != NULL){
            pre = pre->next;
            cur = cur->next;
            if(cur != NULL)
               cur = cur->next;
            else
               return false;
            if(cur == pre)
                return true;
        }
        return false;
    }
};