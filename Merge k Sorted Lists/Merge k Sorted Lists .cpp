class Solution {
public:
 ListNode * mergeTwoLists(ListNode *l1 , ListNode *l2){
		if(l1 == NULL)	return l2;
		if(l2 == NULL) return l1;
		ListNode temp(-1);
		ListNode *p = &temp;
		for(;l1 !=NULL && l2 !=NULL;p = p->next){
			if(l1->val < l2->val){
			    p->next = l1;
				l1 = l1->next;
			}else{
				p->next = l2;
				l2 = l2->next;
			}
		}
		if(l1 == NULL)
			p->next = l2;
		else if(l2 == NULL)
			p->next = l1;
		return temp.next;		
}
 ListNode *mergeKLists(vector<ListNode *> &lists) {
	   ListNode* p;
	   p= lists[0];
	   int i=1;
	   for(i=1;i<lists.size();i++){
		    p=mergeTwoLists(p,lists[i]);
	   }
       return p;
   }
};