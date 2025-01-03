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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr) return nullptr;
       

        int size, c = 0;

        

        ListNode *p = head;

        while(p)
        {
            c++;
            p = p -> next;
        }

        size = c;
        c = 0;

        k %= size;

         if(k == 0 || head -> next == NULL) return head;

        p = head;

        
        ListNode *q;

        while(p)
        {
            c++;

            if(c == size - k)
            {
                q = p -> next;
                p -> next = nullptr;
                break;
            }   

            p = p -> next;
        }

        p = head;

        ListNode *dummy = new ListNode(0, q);

        while(q)
        {
            if(!(q -> next))
            break;

            q = q -> next;
        }

        q -> next = p;

        return dummy -> next;



    }
};