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
int sum=0;
 bool dfs(TreeNode* node, int target){
    if(!node)return 0;
    sum+=(node->val);
    if(sum==target && !node->left && !node->right)return true;

   bool left= dfs(node->left, target);
   bool right=dfs(node->right,target);
    sum-=node->val;
    return right||left;
 }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,targetSum);

    }
};