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
private:
 void dfs(TreeNode*node, TreeNode* &res , TreeNode* k){
        // if(!node)return;
        stack<TreeNode*>st;
        st.push(node);
       
        while(!st.empty()){
            TreeNode* top= st.top();
             st.pop();
            if(top){
                if(top->val==k->val){
                    cout<<top->val;
                res= top;
                break;
            }
            if(top->left)st.push(top->left);
            if(top->right)st.push(top->right);
            }
            
        }
    }  
    // void dfs(TreeNode*node, TreeNode* &res , TreeNode* k){
    //     if(!node)return;

    //     if(node->val==k->val){
    //         res=node;
    //         return;
    //     }
    //     dfs(node->left, res, k);
    //     dfs(node->right,res,k);
    // }    
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* res;
        dfs(cloned,res,target);
        return res;
    }
};