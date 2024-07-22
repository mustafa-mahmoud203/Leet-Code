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
bool isMirror(TreeNode *lef ,TreeNode *rig){

    if(!lef && !rig)return true;
    if(!lef || !rig)return false;  
    return (lef->val == rig->val) && isMirror(lef->left ,rig->right) && isMirror(lef->right, rig->left);
}
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};