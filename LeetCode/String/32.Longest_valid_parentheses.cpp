/*
Given a string containing just the characters '(' and ')',
find the length of the longest valid (well-formed) parentheses substring.
*/

#include <string>
#include <stack>

using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        int res=0,max=0;
        std::stack<char> stk;
        for (int i=0;i<s.size();i++){
            switch (s[i]){
                case '(':
                    stk.push('(');
                    break;
                case ')':
                    if ((!stk.empty()) && (stk.top()=='(')){
                        stk.pop();
                        res+=2;
                    }
                    else {
                        max = (max>res)?max:res;
                        res =0;
                    }
                    break;
            }                      
        }
        return max;
    }
};
