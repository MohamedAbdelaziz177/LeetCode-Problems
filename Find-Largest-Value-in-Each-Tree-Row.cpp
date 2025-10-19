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
    map<TreeNode*, bool> visited;
    bool levelVisited[100004];
    map<int, int> maxes;

    void dfs(TreeNode* root, int level = 0)
    {
        if(root == nullptr)
        return;

        visited[root] = true;
        
        if(maxes.find(level) != maxes.end())
        maxes[level] = max(maxes[level], root -> val);
        else maxes[level] = root -> val;

        

        if(!visited[root -> left])
        dfs(root -> left, level + 1);

        if(!visited[root -> right])
        dfs(root -> right, level + 1);
    }
    vector<int> largestValues(TreeNode* root) {
        dfs(root);

        vector<int> ans;

        for(auto e : maxes)
        ans.push_back(e.second);

        return ans;
    }
};