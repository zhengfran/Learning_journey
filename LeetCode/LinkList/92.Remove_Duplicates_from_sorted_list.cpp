/*
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
*/

#include <cstdio>

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if ((!head)||(!(head->next))) return head;
        ListNode **pp = &head;
        ListNode *entry = head;
        int tmp;
        while(pp){
            if ((*pp)->val == (*pp)->next->val){
                tmp = (*pp)->val;
                *pp = (*pp)->next;
            }
            pp = &(entry->next);
            entry =entry->next;
        }

        
    }
};