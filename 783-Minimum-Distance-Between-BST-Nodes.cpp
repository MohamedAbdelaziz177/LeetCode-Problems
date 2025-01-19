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
    
    vector<int>v;

    void DFS(TreeNode* p){

        if(!p) return;

        DFS(p -> left);
        v.push_back(p -> val);
        DFS(p -> right);
    }

    int minDiffInBST(TreeNode* root) {

        DFS(root);
        
        int mnDiff = INT_MAX;

        for(int i = 1; i < v.size(); i++)
        mnDiff = min(mnDiff, v[i] - v[i - 1]);

        return mnDiff;
    }
};