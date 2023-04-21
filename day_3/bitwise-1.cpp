/*
For any number, we can check whether its 
‘i’th bit is 0(OFF) or 1(ON) by bitwise 
ANDing it with “2^i” (2 raise to i). 
*/

bool checkBit(int num, int index) {
    
    int mask = 1 << index - 1;
    
    return num & mask;
}

/*
Example 1:

Input: num = 1 index = 1
Output: true

Example 2:

Input: num = 45 index = 10
Output: false

Time complexity: O(1)
Space complexity: O(1)

tests passed: All
*/