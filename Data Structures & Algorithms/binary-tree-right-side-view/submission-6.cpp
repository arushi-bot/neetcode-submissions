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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root) return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int level=q.size();
            for(int i = level; i>1 ; i--)
            {
                TreeNode* front = q.front();
                q.pop();
                if(front){
                    if(front->left) q.push(front->left);
                    if(front->right) q.push(front->right);
                }
                
            }
            TreeNode* last = q.front();
            q.pop();
            if(last->left) q.push(last->left);
            if(last->right) q.push(last->right);
            if(last) res.push_back(last->val);

        }
        return res;
    }  

};
