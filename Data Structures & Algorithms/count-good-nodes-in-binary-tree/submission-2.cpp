class Solution {
public:
    int res = 0;
    int goodNodes(TreeNode* root) {
        if (!root) {
            return 0;
        }
        dfs(root, root->val); // Initialize maxVal with the root's value
        return res;
    }
    void dfs(TreeNode* root, int maxVal) {
        if (!root) {
            return;
        }
        if (root->val >= maxVal) {
            res++;
            maxVal = root->val;
        }
        dfs(root->left, maxVal);
        dfs(root->right, maxVal);
    }
};