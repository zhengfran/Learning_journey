#include "link_list.h"

void swapnode(ListNode* node){
    ListNode*temp =node;
    node->next=node->next->next;
    node->next->next= temp;

}

void swapnodedouble(DoubleListNode* node){
    ListNode*temp =node;
    node->next=node->next->next;
    node->next->next= temp;

}