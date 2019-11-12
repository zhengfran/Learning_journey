/*
Given a string, find the length of the longest substring without repeating characters.
*/

// hashtable. slideing window
#include <cstdio>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max=0,left=0,right=0;
        unordered_map<char,int> mp;
        while(right<s.size()){
            if (mp.find(s[right])==mp.end()){
                mp.insert({s[right],right});
                right++;
            }else {
                left = std::max((mp.find(s[right])->second)+1,left);
                mp.erase(s[right]);            
                //right = left;
            }       
            max = ((right-left)>max) ? (right-left):max;    
        }
        return max;
        
    }
};