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
    void dfs(TreeNode* leftNode,TreeNode* rightNode, int depth){
    if(!leftNode || !rightNode ) return ;

    if( depth %2){
        swap( leftNode->val, rightNode->val);
    }
    dfs(leftNode->left, rightNode->right , depth+1);
    dfs(leftNode->right ,rightNode->left, depth+1);
   
    
 }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
          dfs(root->left,root->right,1);
       
        return root;
    }
};