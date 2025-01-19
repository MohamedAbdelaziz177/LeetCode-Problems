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
    
    TreeNode* t = NULL;
    int mn = INT_MAX;

    void DFS(TreeNode* p){

        if(!p) return;

        DFS(p -> left);
        if(!t) t = p;
        else{

            mn = min(mn, abs(p -> val - t -> val));
            t = p;
        }
        DFS(p -> right);
    }

    int minDiffInBST(TreeNode* root) {

        DFS(root);
        
      
        return mn;
    }
};