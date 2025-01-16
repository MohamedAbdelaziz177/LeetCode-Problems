/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

   
    bool Traverse(TreeNode* ll, TreeNode* rr)
    {
        if(!ll && !rr) return true;
        if(!ll && rr) return false;
        if(!rr && ll) return false;
        if(ll -> val != rr -> val) return false;

        bool c1 = true & Traverse(ll -> left, rr -> right);
        bool c2 = true & Traverse(ll -> right, rr -> left);
       
        return c1 & c2;

    }  


      

    
    bool isSymmetric(TreeNode* root) {

    
        TreeNode *leftPtr = root -> left, *rightPtr = root -> right;

        return Traverse(leftPtr, rightPtr);;


    }
};