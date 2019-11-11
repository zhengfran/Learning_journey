/*
Given a linked list, rotate the list to the right by k places, where k is non-negative.
*/

#include <cstdio>
#include <stack>

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if ((!head)||(!(head->next))||(!k)) return head;

        std::stack<ListNode*> stk;
        ListNode *tail=head,* res =head;
        int length =1;
        int rem =0,count=0;
        while(tail->next){
            stk.push(tail);
            tail = tail->next;
            length++;            
        }
        rem = k%length;
        while (count< rem){
            res = stk.top(); 
            res->next = head;
            head = res;
            stk.pop();
            stk.top()->next =NULL;
            count++;      
        }
        return head;
    }
};