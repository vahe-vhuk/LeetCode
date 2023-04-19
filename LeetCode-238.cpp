/*
Given an integer array nums, return an array answer 
such that answer[i] is equal to the product of all 
the elements of nums except nums[i].

The product of any prefix or suffix of nums is 
guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time 
and without using the division operation.
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> res(n, 1);
        int left = 1;
        int right = 1;
        for (int i = 0; i < n; ++i) {
            res[i] *= left;
            left *= nums[i];

            res[n-i-1] *= right;
            right *= nums[n-1-i];
        }
        return res;
    }
};

/*
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]


Time complexity: O(n)
Space complexity: O(n)

LeetCode tests passed: All
*/