class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
            vector<int>col,row;
           
    for(int i=0; i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    col.emplace_back(j+1);
                    row.emplace_back(i+1);
                }
            }
        }
        sort(row.begin(), row.end());
        sort(col.begin(), col.end());
       
         int x=row[row.size()-1]-row[0], y=col[col.size()-1]-col[0];
         
        if(x==0)x=1;
        else x++;
        if(y==0)y=1;
        else y++;
        
        
        return x*y;
    }
};
// 0 0 0 
// 0 0 0 
// 0 0 0
// 1 0 1