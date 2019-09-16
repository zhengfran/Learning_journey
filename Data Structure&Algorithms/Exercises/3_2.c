#include "link_list.h"
#include "stddef.h"
void printLP(ListNode *l, ListNode *p){
    int count=1;
    while (p!=NULL){
        while (count<p->val){
            if(l->next!=NULL){
                l=l->next;
                count++;
            }
        }
        printf("the %dth element:%d",count,l->val);
        p=p->next;
    }

}