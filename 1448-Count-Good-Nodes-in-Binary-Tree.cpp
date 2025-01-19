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
    stack<int>maxes;
    int c = 0;
    void countGood(TreeNode* p)
    {
        if(!p) return;

        if(p -> val >= maxes.top()) c++;

        maxes.push(max(maxes.top(), p -> val));

        countGood(p -> left);
       // maxes.pop();
        countGood(p -> right);
        maxes.pop();

    }
    int goodNodes(TreeNode* root) {

        maxes.push(INT_MIN);
        countGood(root);

        return c;
    }
};