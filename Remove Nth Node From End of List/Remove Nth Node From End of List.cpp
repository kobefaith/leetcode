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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *start = head;
        ListNode *end = head;
        int i = 0;
        while (end != NULL && i < n){
            end = end->next;
            i++;
        }
        if (end == NULL){
            head = head->next;
            return head;
        }
        while (end->next != NULL){
            start = start->next;
            end = end->next;
        }
        start->next = start->next->next;
		
        return head;
        
    }
};