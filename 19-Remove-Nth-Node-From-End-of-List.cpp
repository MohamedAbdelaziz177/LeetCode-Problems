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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode *dummy = new ListNode(0, head);


        if(head == nullptr) return head;
        if(head -> next == nullptr) return nullptr;
        
        int c = 0, r;
        ListNode *p = dummy -> next;

        while(p)
        {
            c++;
            p = p -> next;
        }

        r = c - n + 1;
        c = 0; 
        p = dummy -> next;

        ListNode *prev = dummy;

        while(p)
        {
            c++;

            if(c == r)
            {
                prev -> next = p -> next;
                p -> next = nullptr;
            }

            prev = p;
            p = p -> next;
        }

        return dummy -> next;
    }
};