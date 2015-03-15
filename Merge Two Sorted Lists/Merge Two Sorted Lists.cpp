class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *p;
		ListNode *s;
		ListNode *pre;
		ListNode *beh;
		ListNode *result;
		
		if(l1 == NULL)
			return l2;			
		else if(l2 == NULL)
			return l1;			
		else if (l1->val <= l2->val){			    
				pre = l1;
				p=l1;
				s=l2;
				result = l1;
				beh = s->next;
		}else if (l1->val > l2->val){			
				pre = l2;
				p=l2;
				s=l1;
				result = l2;
				beh = s->next;
		}
		p = p->next;
		while (p != NULL && s != NULL){		
			if (p->val < s->val){
			    p = p->next;
				pre = pre->next;				
			}else{
				pre->next = s;
				s->next = p;				
				pre = pre->next;				
				if(beh != NULL){
				    s = beh;				    			 
				    beh = beh->next;
				}else					
					break;
			}
		}  
		if (p == NULL){
		   pre->next = s;
		}
		
		return result;
    }
};