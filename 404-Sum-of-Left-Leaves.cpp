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

    int dfs(TreeNode* node,bool isleft){
        if(!node)return 0;

        if(!node->left && !node->right){
            return isleft? node->val : 0;
        }

        int sumleft= dfs(node->left, true);
         int sumright= dfs(node->right, false);
        return sumleft + sumright;
    }    
    int sumOfLeftLeaves(TreeNode* root) {
        
        return dfs(root, false);
    }
};