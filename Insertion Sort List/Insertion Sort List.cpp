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
    ListNode *insertionSortList(ListNode *head) {
        if (head == NULL || head->next == NULL){
            return head;
        }
        ListNode *dummy = new ListNode(INT_MIN);
        dummy->next = head;
        ListNode *cur = head->next;
        ListNode *pre = dummy;
        ListNode *beh = dummy->next;
        beh->next = NULL;
        ListNode *temp;
        while(cur != NULL){
            while(beh->val < cur->val && beh != NULL){
                beh = beh->next;
                pre = pre->next;
            }
            if (beh != NULL){
                temp = cur->next;
                pre->next = cur;
                cur->next = beh;
            }else{
                temp = cur->next;
                beh->next = cur;
                cur->next = NULL;
            }
            cur = temp;
            pre = dummy;
            beh = pre->next;
        }
        return dummy->next;
    }
};