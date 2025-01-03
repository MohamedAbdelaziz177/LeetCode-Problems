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
    ListNode* partition(ListNode* head, int x) {

        if(!head || !(head -> next)) return head;
        
        ListNode *lhead = NULL, *rhead = NULL;

        ListNode *r = rhead, *l = lhead, *p = head;


        while(p)
        {
            if(p -> val < x)
            {
                if(l == NULL)
                {
                    l = p;
                    lhead = p;
                }
                else
                {
                    l -> next = p;
                    l = l -> next;
                }
            }

            else
            {
                if(r == NULL)
                {
                    r = p;
                    rhead = p;
                }
                else
                {
                    r -> next = p;
                    r = r -> next;
                }

            }

            p = p -> next;
        }

        if(r) r -> next = NULL;

        if(!l) return rhead;

        if(l)
        l -> next = rhead;
        

        return lhead;
    }
};