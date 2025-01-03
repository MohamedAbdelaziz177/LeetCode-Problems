/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* p) {

        ListNode *q = p -> next;
        p -> next = q -> next;
        q -> next = NULL;
        
        p -> val = q -> val;
        
        
    }
};