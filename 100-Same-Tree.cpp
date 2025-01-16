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
    
    bool checkSame(TreeNode* p, TreeNode* q)
    {
      //  if(!p -> val) return true;
        
        if((p && !q) || (!p && q)) return false;
        if(p -> val != q -> val) return false;

        bool left = true, right = true;

        if(p -> left || q -> left)
        left &= checkSame(p -> left, q -> left);

        if(p -> right || q -> right)
        right &= checkSame(p -> right, q -> right);

        return left & right;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(!p && !q) return true;
        if((p && !q) || (!p && q)) return false;
        
        return checkSame(p, q);
      
    }
};