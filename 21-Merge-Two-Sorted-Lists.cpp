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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL)
        return list2;

        if(list2 == NULL)
        return list1;
        
        ListNode *newList = new ListNode(0, NULL),
        *z = newList,
        *p = list1,
        *q = list2;

        while(p && q)
        {
            ListNode *t = p -> next, *tt = q -> next;
            cout << p -> val << \  \ << q -> val << \\
\;
            if(p -> val < q -> val)
            {
               
                    z -> next = p;
                    z = z -> next;
                

                p = t;
            }

            else if(p -> val > q -> val)
            {
               
            
                    z -> next = q;
                    z = z -> next;
                

                q = tt;
            }
            

            else
            {
                
              

               
                    z -> next = p;
                    z -> next -> next = q;
                    z = z -> next -> next;
               

                p = t;
                q = tt;
            }
            
        }

        if(!p)
        {
            z -> next = q;
        }

        if(!q)
        {
            z -> next = p;
        }
     
        return newList -> next;
        

    }
};