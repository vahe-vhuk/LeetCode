/*
A phrase is a palindrome if, after converting 
all uppercase letters into lowercase letters and 
removing all non-alphanumeric characters, it reads 
the same forward and backward. Alphanumeric characters 
include letters and numbers.

Given a string s, return true if it is a palindrome, or 
false otherwise.

Constraints:

1 <= s.length <= 2 * 10**5
s consists only of printable ASCII characters.
*/


class Solution {
public:
    bool check(string s) {
        int n = s.size();
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] != s[n-i-1]) {
                return false;
            }
        }
        return true;
    }

    bool isPalindrome(string s) {
        string tmp;
        for (char i : s) {
            if ((i >= 'a' && i <= 'z') || (i >= '0' && i <= '9')) {
                tmp.push_back(i);
            }
            if (i >= 'A' && i <= 'Z') {
                tmp.push_back(i+32);
            }
        }
        return check(tmp);
    }
};

/*
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

Time complexity: O(n)
Space complexity: O(n)

Leetcode tests passed: All
*/