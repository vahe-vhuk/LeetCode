/*
Given a string s, find the first non-repeating 
character in it and return its index. If it does 
not exist, return -1.
*/

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        map<char, int> hmap;

        for (int i = 0; i < n; ++i) {
            hmap[s[i]]++;
        }
        for (int i = 0; i < n; ++i) {
            if (hmap[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

/*
Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1

Time complexity: O(n)
Space complexity: O(n)

LeetCode tests passed: ALL
*/