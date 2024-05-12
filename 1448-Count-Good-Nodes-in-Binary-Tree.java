/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int res=0;
    private void dfs(TreeNode node, int mx){
        if(node==null)return ;

        if(mx<=node.val){
            res++;
            mx=node.val;
        }
        dfs(node.left, mx);
        dfs(node.right, mx);
    }
    public int goodNodes(TreeNode root) {
        
        dfs(root, root.val);
        return res; 
    }
}