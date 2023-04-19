/*
Given the head of a linked list and an integer val, 
remove all the nodes of the linked list that has 
Node.val == val, and return the new head.

Constraints:

The number of nodes in the list is in the range [0, 10**4].
1 <= Node.val <= 50
0 <= val <= 50
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
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val) {
            ListNode* tmp = head->next;
            delete head;
            head = tmp;
        }

        ListNode* t = new ListNode(0, head);
        while (t && t->next) {
            if (t->next->val == val) {
                ListNode* tmp = t->next->next;
                delete t->next;
                t->next = tmp;
            }
            else {
                t = t->next;
            }
        }
        delete t;
        
        return head;
    }
};

/*
Example 1:

Input: head = [], val = 1
Output: []

Example 2:

Input: head = [7,7,7,7], val = 7
Output: []

Time complexity: O(n)
Space complexity: O(1)

LeetCode tests passed: All
*/