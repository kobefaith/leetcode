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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0,len2 = 0;
        int dis;
        if (headA == NULL || headB == NULL)
            return NULL;
			
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        while (temp1 != NULL){
            temp1 = temp1->next;
            len1++;
        }
        while (temp2 != NULL){
            temp2 = temp2->next;
            len2++;
        }
        if (len1 >= len2){
            temp1 = headA;
            temp2 = headB;
            dis = len1-len2;
        }else{
            temp1 = headB;
            temp2 = headA;
            dis = len2-len1;
        }
        while (dis > 0){
            temp1 = temp1->next;
            dis--;
        }
        while (temp1 != NULL){
            if(temp1 == temp2)
                return temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
		
        return NULL;    
        
    }
};