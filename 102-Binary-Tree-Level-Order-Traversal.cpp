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
    vector<vector<int>> levelOrder(TreeNode* root) {

       

        vector<vector<int>>ans;

         if(!root) return ans;
        
        queue<pair<TreeNode*, int>> q;

        vector<pair<int, int>>v;

        int r = 0;
        q.push({root, 0});

        while(!q.empty())
        {
            TreeNode *nd = q.front().first;
            r = q.front().second;

            q.pop();

            v.push_back({nd -> val, r});

           

            if(nd -> left)
            q.push({nd -> left, r + 1});

            if(nd -> right)
            q.push({nd -> right, r + 1});

        }

        ans.resize(r + 1);

        for(auto e : v) ans[e.second].push_back(e.first);
        return ans;
    }
};