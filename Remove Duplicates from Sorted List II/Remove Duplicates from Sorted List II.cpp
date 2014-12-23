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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode temp(-1);
        ListNode *pre = &temp;
        pre->next = head;
        ListNode *cur = head;
        int flag = 1;
        while(cur->next != NULL){
            if(pre->next->val == cur->next->val){
                flag = 0;
                cur = cur->next;
            }else{
                if(flag == 0){
                    pre->next = cur->next;
                    cur = pre->next;
                    flag = 1;
                }else{
                    pre->next = cur;
                    cur = cur->next;
                    pre = pre->next;
                }
            }
        }
        if(pre->next->val ==cur->val && pre->next != cur )
             pre->next = NULL;
        else if(pre->val != cur->val)
            pre->next = cur;
        return temp.next;
    }
};