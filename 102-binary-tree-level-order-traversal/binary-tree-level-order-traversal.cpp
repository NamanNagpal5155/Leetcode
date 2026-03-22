class Solution {
public:
    int level(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return 1 + max(level(root->left), level(root->right));
    }

    void nthorder(TreeNode* root, int curr, int level, vector<int>& ans) {
        if (root == nullptr) return;

        if (curr == level) {
            ans.push_back(root->val);
            return;
        }

        nthorder(root->left, curr + 1, level, ans);
        nthorder(root->right, curr + 1, level, ans);
    }

    void levelorder(TreeNode* root, vector<vector<int>>& v) {
        int lev = level(root);

        for (int i = 1; i <= lev; i++) {
            vector<int> ans;
            nthorder(root, 1, i, ans);
            v.push_back(ans);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        levelorder(root, v);
        return v;
    }
};