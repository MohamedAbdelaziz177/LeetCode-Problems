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
    
    int maximize(TreeNode* p)
    {
        if(!p) return 1;

        int c1 = 0, c2 = 0;
        if(p -> left) 
        c1 = 1 + maximize(p -> left);

        if(p -> right)
        c2 = 1 + maximize(p -> right);

        return max(c1, c2);
    }
    int maxDepth(TreeNode* root) {

        if(!root) return 0;
        
        return maximize(root) + 1;
    }
};