/*
Given a number x and two positions (from the right side) 
in the binary representation of x, write a function that 
swaps n bits at the given two positions and returns the 
result. It is also given that the two sets of bits do not 
overlap.
*/

int swapBits(int x, int index1, int index2, int n) {
	--index1;
	--index2;

    int mask1 = ((1 << n) - 1) << index1;
    int mask2 = ((1 << n) - 1) << index2;

    int bits1 = (x & mask1) >> index1;
    int bits2 = (x & mask2) >> index2;

    int temp = bits1;
    bits1 = bits2;
    bits2 = temp;

    x &= ~mask1;
    x &= ~mask2;
    x |= bits1 << index1;
    x |= bits2 << index2;

    return x;
}

/*
Example 1:

Input: num = 12 index1 = 3 index2 = 1 n = 1
Output: 6

Example 2:

Input: num = 47 index1 = 9 index2 = 4 n = 2
Output: 295

Time complexity: O(1)
Space complexity: O(1)

tests passed: All
*/