/*
Balanced strings are those who have equal quantity of 'L' and 'R' characters.

Given a balanced string s split it in the maximum amount of balanced strings.

Return the maximum amount of splitted balanced strings.
*/
#include <string>

using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {

        int l=0,r=0,count=0;        
        for (int i=0;i<s.size();i++){
            if (s[i] == 'R') r++;
            if (s[i] == 'L') l++;
            if ((l==r) && (!r)) 
            {
                count++;
                l=r=0;
            }
        }
        return count;
        
    }
};