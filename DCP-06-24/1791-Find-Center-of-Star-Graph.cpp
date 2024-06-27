class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int>m;
        for(auto &edge:edges){
           m[edge[0]]++;
           m[edge[1]]++;
        }

        for(auto i: m){
            if(i.second==edges.size())return i.first;
        }
        return 1;
    }
};