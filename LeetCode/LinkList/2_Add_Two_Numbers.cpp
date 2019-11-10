/*
You are given two non-empty linked lists representing two non-negative 
integers. The digits are stored in reverse order and each of their 
nodes contain a single digit. Add the two numbers and return it as 
a linked list.
You may assume the two numbers do not contain any leading zero, 
except the number 0 itself.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
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
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        int carry;
        
    }
};