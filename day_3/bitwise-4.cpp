/*
Given two integers, find XOR of them without using 
the XOR operator, i.e., without using ^ in C/C++.
*/

int xor(int num1, int num2) {
	return (num1 & ~num2) | (~num1 & num2);
}

/*
Example 1:

Input: num1 = 4 num = 9 
Output: 13

Example 2:

Input: num1 = 15 num2 = 15 
Output: 0

Time complexity: O(1)
Space complexity: O(1)

tests passed: All
*/