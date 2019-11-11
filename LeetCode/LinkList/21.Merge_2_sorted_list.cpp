/*
Merge two sorted linked lists and return it as a new list.
The new list should be made by splicing together the nodes of the first two lists.
*/

#include <cstdio>

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* head;
        ListNode* res;
        //dummy head
        head = res = new ListNode(0);
        while (l1 || l2){
            if (l1->val<=l2->val){
                head->next=l1;
                head = head->next;
                l1 = l1->next;
            } else {
                head->next=l2;
                head = head->next;
                l2 = l2->next;
            }
            if (!l1){
                head->next = l2;
                break;
            }
            if(!l2){
                head->next = l1;
                break;
            }
        }
        return res->next;
    }
};