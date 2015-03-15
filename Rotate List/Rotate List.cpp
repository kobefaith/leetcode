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
    ListNode *rotateRight(ListNode *head, int k) {
        ListNode *beg = head;
        ListNode *start = head;
        ListNode *end = head;
        int len = 0;
        if (head == NULL )
            return head;
        while (end != NULL){
            len++;
		    end = end->next;
	    }
	    k %= len;
	    end = beg;
	    if(k == 0)
	    	return head;
        for (int i = 0; i < k; i++)
        	end = end->next;
        if(end == NULL)
		    return head;
	    while (end->next!= NULL){
	        beg = beg->next;	
	        end = end->next;
	    }
	    head = beg->next;
	    beg->next = NULL;
	    end->next = start;
		
	    return head;	
    }
};