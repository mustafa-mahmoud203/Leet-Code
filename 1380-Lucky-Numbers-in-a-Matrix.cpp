class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
       
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
             int row=INT_MAX;
             for(int j=0;j<m;j++){
                row=min(row, matrix[i][j]);
             }
             mp[row]++;
        }
        for(int i=0;i<m;i++){
             int col=-1;
             for(int j=0;j<n;j++){
                col=max(col,matrix[j][i]);
             }
             mp[col]++;
        }
        for(auto i : mp){
            if(i.second>1)res.emplace_back(i.first);
        }
        return res;
    }
};


