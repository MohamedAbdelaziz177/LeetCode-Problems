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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *p = l1, *q = l2 , *dummy = new ListNode(0, p),
         *d = dummy;

   

   while(p || q)
   {

    ListNode *t = new ListNode();
    if(p && q)
    {
        t -> val = (p -> val) + (q -> val);

    }

    else if(p) t -> val = p -> val;

    else{
        t -> val = q -> val;
    }

    d -> next = t;

    if(p) p = p -> next;
    if(q) q = q -> next;

    d = d -> next;

   }

   d = dummy -> next;

   int u = 0;

   while(d)
   {
    if(d -> val >= 10)
    {
        int x = d -> val;
        d -> val %= 10;

        if(d -> next)
        {
            d -> next -> val += (x / 10);
        }

        else 
        {
            u = x / 10;
                   
        }

    }

    d = d -> next;

   }

   cout << u;

   if(u)
   {

    ListNode *t = new ListNode();
    t -> val = u;
    t -> next = NULL;

    d = dummy -> next;

    bool f = false;

     while(d && !f)
    {
        if(d -> next);
        else d -> next = t, f = true;

        d = d -> next;
    
   }
   }
 
  return dummy -> next;
}
        

};