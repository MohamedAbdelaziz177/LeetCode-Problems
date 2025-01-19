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
    
    void dfs(TreeNode* p, int val)
    {
        if(!p -> left && val < p -> val)
        {
            p -> left = new TreeNode(val);
            return;
        }

        if(!p -> right && val > p -> val)
        {
            p -> right = new TreeNode(val);
            return;
        }


        if(p -> left && val < p -> val)
        dfs(p -> left, val);
        
        
        
         if(p -> right && val > p -> val)
         dfs(p -> right, val);

        
        
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        if(!root) return new TreeNode(val);
        dfs(root, val);
        return root;
    }
};