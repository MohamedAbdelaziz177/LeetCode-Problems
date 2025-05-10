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
    int mx = -1000000000;

    int maxPathSum(TreeNode* root)
    {
        if(!root-> left && !root -> right)
        return root -> val;

        recurse(root);
        return mx;
    }

    int recurse(TreeNode* root) {
        
        if(!root)
        return 0;

        int u = recurse(root -> left);

        if(u < 0) u = 0;

        int v = recurse(root -> right);
        if(v < 0) v = 0;

        mx = max(mx, u + v + root -> val);
        //int mx1 = max(max(u, v), u + v - root -> val);
        //int mx2 = max(max(u, v), u + v - 2 * root -> val);

        return root -> val + max(u, v);
    }
};