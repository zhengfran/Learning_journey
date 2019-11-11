/*
Given a linked list, swap every two adjacent nodes and return its head.

You may not modify the values in the list's nodes, only nodes itself may be changed.
*/

#include <cstdio>
#include <vector>

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

//an recurive solution, stack overflow
class Solution {
public:

    ListNode* swapPairs(ListNode* head){
        if ((!head) || (!(head->next))) return head;
        ListNode* nex = head->next;
        nex->next = head;
        head->next = swapPairs(head->next->next);
        return nex;
    }
};

//an interative solution
class Solution {
public:

    ListNode* swapPairs(ListNode* head){
        //create a dummy head
        ListNode *dummy = new ListNode(0), *node;
        node = dummy;
        dummy->next = head;
        while (head && head->next) {
            ListNode *nxt = head->next;
            //make 1st point to 2nd's next
            head->next = nxt->next;
            //make 2nd point to second
            nxt->next = head;
            //mae nxt the real header
            node->next = nxt;
            //move on to the next pair
            node = head;
            head = node->next;
        }
        return dummy->next;
        }
};