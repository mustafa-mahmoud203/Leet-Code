/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* dfs(TreeNode* &node,TreeNode* &res ,TreeNode* p, TreeNode* q){
        
      if((node->val >= p->val && node->val <= q->val ) || (node->val <= p->val && node->val >= q->val)){
         res=node;
         return res;
      } 

        if(node->val > p->val) dfs(node->left,res,p,q);
        else dfs(node->right,res,p,q);

       return res; 
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* res;
        dfs(root ,res, p ,q);
        return res;
        
    }
};