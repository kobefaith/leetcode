class Solution {
public:
    ListNode *reverse(ListNode *first,ListNode *begin,ListNode *end){
        ListNode *pre;
        ListNode *cur;
        ListNode *beh;
		ListNode *end_next = end->next;		
		for(pre=begin,cur = pre->next,beh = cur->next;cur!= end_next;pre = cur,cur = beh,beh = beh?beh->next:NULL)	{
			 cur->next = pre;
		}        
        first->next =end ;
        begin->next = end_next;
        return begin;
    }
    ListNode *reverseKGroup(ListNode *head, int k) {
        if(head == NULL ||head->next == NULL ||k<2)
			return	 head;
        ListNode temp(-1);
        temp.next = head;
        int i=0;
        ListNode *first ;
        ListNode *end ;
       for(first = &temp,end = head;end;end = first->next){
            for(i=1;i<k &&end ;i++){
                end = end->next;
            }			
            if(end == NULL)
                 break;
            first =reverse(first,first->next,end);          
           
        }
		return temp.next;
    }
};