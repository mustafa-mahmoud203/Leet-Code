class Solution {
    private int maxVal(int[][]arr, int n , int m){
        int mx=-1;

        for(int i=n; i<n+3;i++){
            for(int j=m; j<m+3;j++)
                mx=Math.max(mx,arr[i][j]);
        }

        return mx;
    }
    public int[][] largestLocal(int[][] grid) {
        int n=grid.length;
        int [][] res= new int [n-2][n-2];
        for(int i=0; i<n-2;i++){
            for(int j=0; j<n-2;j++)
                res[i][j]=maxVal(grid,i,j);
        }
        return res;
    }
}