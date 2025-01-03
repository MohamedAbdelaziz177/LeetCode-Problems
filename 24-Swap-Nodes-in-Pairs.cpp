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
    ListNode* swapPairs(ListNode* head) {

       ListNode *dummy = new ListNode(0, head), *p = dummy -> next;


       while(p && p -> next)
       {

        int t = p -> val;
        p -> val = (p -> next) -> val;
        p -> next -> val = t;

        p = p -> next -> next;
        
       }

       return head;
       
        
    }
};