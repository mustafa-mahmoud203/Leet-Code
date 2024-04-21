class Solution {
public:
    
    void dfs(int source,vector<int>adj[], vector<bool>&vis){
        vis[source]=true;
        for(auto &it:adj[source]){
            if(!vis[it])
                dfs(it,adj,vis);
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
      vector<int>adj[n];
        vector<bool>vis(n,false);
        for(auto &it:edges){
            adj[it[0]].emplace_back(it[1]);
             adj[it[1]].emplace_back(it[0]);
        }
        
        dfs(source,adj,vis);
        return vis[destination];
    }
};