/*
Given the head of a singly linked list, sort the list using 
insertion sort, and return the sorted list's head.

The steps of the insertion sort algorithm:

Insertion sort iterates, consuming one input element each 
repetition and growing a sorted output list.
At each iteration, insertion sort removes one element from the 
input data, finds the location it belongs within the sorted list and inserts it there.
It repeats until no input elements remain.

Constraints:

The number of nodes in the list is in the range [1, 5000].
-5000 <= Node.val <= 5000
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        for(ListNode* cur = head; cur; cur = cur -> next) 
            for(ListNode* j = head; j != cur; j = j -> next) 
                if(j -> val > cur -> val) 
                    swap(j -> val, cur -> val);
        return head;    
    }
};

/*
Example 1:

Input: head = [4,2,1,3]
Output: [1,2,3,4]

Example 2:

Input: head = [-1,5,3,4,0]
Output: [-1,0,3,4,5]

Time complexity: O(n**2)
Space complexity: O(1)

LeetCode tests passed: All
*/