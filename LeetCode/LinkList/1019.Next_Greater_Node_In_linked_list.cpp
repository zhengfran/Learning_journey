/*
https://leetcode.com/problems/next-greater-node-in-linked-list/
*/

#include <cstdio>
#include <vector>
#include <stack>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {        
        stack<int> stk;        
        int count=0,size=0;
        if(!head) return res;
        while (head){
            size++;
            head=head->next;
        }
        vector<int> res(size);
        while(head){
            if ((stk.empty()) || (stk.top()>= head->val))
            {
                stk.push(head->val);
                head=head->next;
            }
            else 
            {
                while (!stk.empty()){
                    if ( head->val> stk.top())
                    {
                        res.push_back(head->val);
                        stk.pop();    
                    }                
                }
                stk.push(head->val);
                head = head->next;
            }

            if (head == NULL){
                while (!stk.empty()){
                    res.push_back(0);
                    stk.pop();                    
                }
                break;
            }
        }
        return res;
        
    }
};