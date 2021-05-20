// OJ: https://leetcode.com/problems/binary-tree-level-order-traversal/
// Author: github.com/punkfulw
// Time: O(N)
// Space: O(N)
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            int n = q.size();
            vector<int> cntlevel;
            for (int i = 0; i < n; i++){
                TreeNode* p = q.front();
                q.pop();
                cntlevel.push_back(p->val);
                if (p->left) q.push(p->left);
                if (p->right) q.push(p->right);
            }
            ans.push_back(cntlevel);
        }
        return ans;
    }
};
