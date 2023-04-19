/*
Given a non-empty array of integers nums, every 
element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime 
complexity and use only constant extra space.
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            res ^= nums[i];
        }
        return res;
    }
};

/*
Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1

Time complexity: O(n)
Space complexity: O(1)

LeetCode tests passed: ALL
*/