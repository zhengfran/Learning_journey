/*
Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.
*/

#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

// Use a priority Queue
struct compare {
    bool operator()(const ListNode* a, const ListNode* b){
        return ((a->val) > (b->val));
    }
};

class Solution
{

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare> pq;
        ListNode *head = new ListNode(0);
        ListNode *tail = head;
        for (int i=0;i<lists.size();i++){
            if (lists[i]!=NULL)
            {
                pq.push(lists[i]);
            }
        }
        while(pq.size()){                       
            ListNode *pop = pq.top();pq.pop();
            tail->next = pop;
            tail = tail->next;
            if(pop->next)   
            {
                pq.push(pop->next);
            }
            
        }
        return head->next;
    }
};

//Divide and Conquer by using mering 2 sorted lists, also make use of mergesort
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

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k =lists.size();
        ListNode *res=NULL;
        if(!k) return NULL;
        for (int i=0;i<k;i++){
            res= mergeTwoLists(lists[i],res);
        }
        return res;

    }


};

