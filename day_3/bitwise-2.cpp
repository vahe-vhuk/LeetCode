/*
 Write an efficient program to count the 
 number of 1s in the binary representation 
 of an integer.
 */

int countOnes(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

/*
Example 1:

Input: num = 23
Output: 4

Example 2:

Input: num = 0
Output: 0

Time complexity: O(log(n))
Space complexity: O(1)

tests passed: All
*/