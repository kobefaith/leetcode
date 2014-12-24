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
    void reverse(ListNode *pre,ListNode *begin,ListNode *end){
        ListNode *end_next = end->next;
        ListNode *cur = begin;
        ListNode *beh = begin->next;
        while(beh != end_next ){
            ListNode *next;
            if(beh->next != NULL)
               next = beh->next;
            else
               next = NULL;
            beh->next = cur;
            cur = beh;
            beh = next;
        }
        pre->next = end;
        begin->next = end_next;
        
    }
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        ListNode temp(-1);
        ListNode *pre = &temp;
        pre->next = head;
        ListNode *cur = head;
        ListNode *end = head;
        int i,j;
        for( i=0,j=0;j<n-1;i++,j++){
            if(i<m-1){
                pre = pre->next;
                cur = cur->next;
            }
            end = end->next;
        }
        reverse(pre,cur,end);
        return temp.next;
    }
};