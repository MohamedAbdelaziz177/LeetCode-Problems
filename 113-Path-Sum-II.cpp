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
    vector<vector<int>>ans;
    int target;

    void checkPath(TreeNode *ptr, vector<int>v = {},  int s = 0)
    {
        
        v.push_back(ptr -> val);

        if(ptr -> right)
        checkPath(ptr -> right, v, s + ptr -> val);

        if(ptr -> left)
        checkPath(ptr -> left, v, s + ptr -> val);

        if(s + ptr -> val == target && !ptr -> left && !ptr -> right) ans.push_back(v);

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        if(root == NULL) return ans;
       
        target = targetSum;

        checkPath(root);

        return ans;

    }
};