
/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string ""
*/
#include <string>
#include <vector>
#include <limits.h>

//vertical scanning

using namespace std;

class Solution1 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string res = "";
        int shortest = INT_MAX;
        for (int i=0;i<strs.size();i++){
            shortest = (shortest>strs[i].size()) ? strs[i].size() : shortest; 
        }
        for (int i=0;i<shortest;i++){
            for (int j=0;j<strs.size()-1;j++){
                if (strs[j][i] == strs[j+1][i]){
                    continue;
                }
                else{
                    return res;
                }
            }
            res.push_back(strs[0][i]);
        }
        return res;
    }
};

//binary search
class Solution2 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l=0,r=strs.size()-1;
        while (l < r){
            longestCommonPrefix(strs)
        }
    }
};