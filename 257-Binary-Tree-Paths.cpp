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
  void dfs(TreeNode* node, string path,   vector<string>&res){
    if(!node)return ;

        if(path==\\)path+=to_string(node->val);
        else path += \->\+to_string(node->val);

        if(!node->left && !node->right){
            res.emplace_back(path);
        }
            dfs(node->left, path, res);
            dfs(node->right, path ,res);
  }
    vector<string> binaryTreePaths(TreeNode* root) {
         vector<string>res;

         dfs(root,\\,res);
         return res;
    }
};