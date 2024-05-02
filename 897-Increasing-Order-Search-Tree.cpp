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
private:
    void dfs(TreeNode* node,  vector<int> &v){
        if(!node)return ;

        dfs(node->left,v);
        v.emplace_back(node->val);
        dfs(node->right,v);

    }

    TreeNode* newTree(vector<int>&v, int i ,int n){
        if(i==n)return NULL;

        TreeNode* node=new TreeNode(v[i]);
        node->right=newTree(v,i+1,n);
        return node;
    }    
public:
    TreeNode* increasingBST(TreeNode* root) {
        
        vector<int> values;
         dfs(root,values);
        // TreeNode* temp=new TreeNode(values[0]);
        // TreeNode* res=temp;
        // for(int i=1;i<values.size();i++){
        //     res->right=new TreeNode(values[i]);
        //     res=res->right;
         
        // }
        
        return newTree(values,0,values.size());
    }
};