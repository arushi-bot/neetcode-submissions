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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* curr = root;
        if(!root) return nullptr;
        while(curr){
            TreeNode* temp = curr->right;
            curr->right = curr->left;
            curr->left = temp;
            invertTree(curr->right);
            invertTree(curr->left);
            return root;
        }
    }
};
