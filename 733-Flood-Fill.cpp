class Solution {
public:
 void dfs(vector<vector<int>>& arr, int sr, int sc, int color, int val){
    if(sr < 0 || sr >= arr.size() || sc < 0 || sc >= arr[0].size() || arr[sr][sc]!=val) return;
        
  
    arr[sr][sc]=color;
    dfs(arr,sr-1,sc,color,val);
    dfs(arr,sr+1,sc,color,val);
    dfs(arr,sr,sc-1,color,val);
    dfs(arr,sr,sc+1,color,val);

 }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)return image;
        
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;

    }
};