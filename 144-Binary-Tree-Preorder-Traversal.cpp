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

    void dfs(TreeNode* node , vector<int> &res){
        if(!node)return;

        res.emplace_back(node->val);
          dfs(node->left, res);
        dfs(node->right, res);
      
    }
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int> res;
         dfs(root ,res);
         return res;
        
    }
};