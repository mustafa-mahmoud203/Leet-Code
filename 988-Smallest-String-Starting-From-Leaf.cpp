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
        void dfs(TreeNode* node, string path, string &res){
            if(!node)return;

            path+= char('a'+node->val);

            if(!node->left && ! node->right){
                reverse(path.begin(), path.end());
                if(res>path || res==""){
                    res=path;
                }
                reverse(path.begin(), path.end());
            }
            dfs(node->left, path, res);
            dfs(node->right, path ,res);

        }

    string smallestFromLeaf(TreeNode* root) {
        string res="";
        dfs(root,"", res);
        return res;
    }
};