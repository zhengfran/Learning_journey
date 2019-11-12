/*
Given a non-empty, singly linked list with head node head, return a middle node of linked list.

If there are two middle nodes, return the second middle node.
*/

/*
    Key: Two pointer
*/
#include <cstdio>

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class solution {
    public:
        ListNode* middleNode(ListNode* head){
            if((!head)||(!(head->next))) return head;
            ListNode *slow = head, *fast =head;
            while(fast->next){                
                if (!(fast->next->next)){
                    return slow->next;
                }
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;

        }
}