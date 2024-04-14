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
int dfs(TreeNode* node){
    if(!node){
        return 0;
    }
    
    int maxLeft=dfs(node->left);
    int maxRight= dfs(node->right);
     if(abs(maxLeft - maxRight) > 1) return -1;
     if(maxLeft == -1 || maxRight == -1) return -1;
     
      return max(maxLeft, maxRight)+1;
}
    bool isBalanced(TreeNode* root) {
      
        return dfs(root)!= -1;
    }
};