/*
You are given a sorted array consisting of only 
integers where every element appears exactly twice, 
except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

Constraints:

1 <= nums.length <= 10**5
0 <= nums[i] <= 10**5
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = (start + end) / 2;

            if (mid % 2 == 1) {
                --mid;
            }
            if (nums[mid] == nums[mid+1]) {
                start = mid + 2;
            }
            else {
                end = mid - 1;
            }
        }
        return nums[start];
    }
};


/*
Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
 
 Time complexity: O(log(n))
 Space complexity: O(1)

 LeetCode tests passed: All
*/
