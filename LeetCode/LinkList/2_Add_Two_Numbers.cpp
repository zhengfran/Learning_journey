/*
You are given two non-empty linked lists representing two non-negative 
integers. The digits are stored in reverse order and each of their 
nodes contain a single digit. Add the two numbers and return it as 
a linked list.
You may assume the two numbers do not contain any leading zero, 
except the number 0 itself.
*/

/* 
    key point:
        1. if carry is 1 in the end, remember to create one more node

*/

#include <cstdio>

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
		if(!l2) return l1;
		int c = 0;
		ListNode *dummy = new ListNode(0);
		ListNode *res = dummy;
		while(l1 && l2)
		{
			res->next = new ListNode(0);
			res = res->next;
			int sum = l1->val+l2->val+c;
			c = sum/10;
			int dig = sum%10;
			res->val = dig;
			l1 = l1->next;
			l2 = l2->next;
		}

		while(l1)
		{
			res->next = new ListNode(0);
			res = res->next;
			int sum = l1->val+c;
			c = sum/10;
			int dig = sum%10;
			res->val = dig;
			l1 = l1->next;
		}
		while(l2)
		{
			res->next = new ListNode(0);
			res = res->next;
			int sum = l2->val+c;
			c = sum/10;
			int dig = sum%10;
			res->val = dig;
			l2 = l2->next;
		}
		if(c){
			res->next = new ListNode(c);
		}
		return dummy->next;
    }
};