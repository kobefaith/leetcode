class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        ListNode *result = head;		
        ListNode *pre = head;		
        ListNode *cur = head;
        if(head == NULL)
            return head;
        ListNode *beh = cur->next;
        if(beh == NULL)
             return head;
        if(beh->next == NULL){
            cur->next = NULL;
            beh->next = cur;
            result = beh;
        }else{
           cur->next = beh->next;
           beh->next = cur;
           result = beh;
           pre = cur;
           cur = cur->next;
           beh = cur->next; 
        }
        while(pre->next != NULL && cur->next != NULL ){
            cur->next = beh->next;
            beh->next = cur;
            pre->next = beh;
            pre = cur;
			if(pre->next == NULL)
				break;
            cur = cur->next;
			if(cur == NULL)
				break;
            beh = cur->next;
        }
        return result;
    }
};