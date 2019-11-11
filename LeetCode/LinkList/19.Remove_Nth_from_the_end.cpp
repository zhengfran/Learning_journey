/*
Given a linked list, remove the n-th node from the end of list and return its head.
Given n will always be valid.
*/

/* 
    key point:
        1. Use Two Pointer
        2. Be careful when the Node to be deleted is head

*/

#include <cstdio>

 //Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return NULL;
        auto slow = head;
        auto fast = head;
        int counter =0;
        while (counter < n) {            
            fast = fast->next; 
            counter++;     
        }
        while (fast){
            slow=slow->next;
            fast=fast->next;
        }

        if(slow==head)
        {
            return head->next;
        }
        else 
        {
            slow->next =slow->next->next;
            return head;
        }        
    }
};