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
        if(head == NULL)
			 return head;
		 ListNode *begin = head;
		 ListNode *end = begin->next;
		 if(end == NULL)
			 return head;
		 while(end != NULL){
			 if(begin->val == end->val){
			     end = end->next;
			 }else{
			     begin->next = end;
				 begin = end;
				 end = end->next;
			 }
		 }
		 begin ->next = NULL;
		 return head;
    }
};