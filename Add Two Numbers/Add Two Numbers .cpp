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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
              ListNode result(-1) ;
              ListNode *first = &result;
              int carry=0;
              if(l1 == NULL && l2 == NULL)
                  return NULL;
				  
              while(l1 != NULL || l2 != NULL){
                  int value;
                  if (l1 != NULL && l2 != NULL){
                      value = l1->val+l2->val+carry;
                      carry = value/10;
                      value %= 10;
                      l1 = l1->next;
                      l2 = l2->next;
                      first->next = new ListNode(value);
                      first = first->next;
                  }else if (l1 == NULL){
                      value = l2->val +carry;
                      carry = value/10;
                      value %= 10;
                      l2 = l2->next;
                      first->next = new ListNode(value);
                      first = first->next;
                  }else{
                     value =l1->val +carry;
                      carry = value/10;
                      value %= 10;
                      l1 = l1->next;
                      first->next = new ListNode(value);
                      first = first->next;
                  }
              }
              if (carry != 0)
                  first->next = new ListNode(carry);
              
              return result.next;
    }
};