#ifndef LINK_LIST_H
#define LINK_LIST_H

typedef struct
{
    int val;
    ListNode* next;
}ListNode;

typedef struct
{
    int val;
    DoubleListNode* next;
    DoubleListNode* prev;
}DoubleListNode;

#endif