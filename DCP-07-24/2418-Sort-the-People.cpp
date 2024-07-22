class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        vector<string> res;
        pair<int, int>p[n];
        for(int i=0;i<n;i++){
            p[i].first=heights[i];
            p[i].second=i;
            }

            sort(p,p+n, greater< pair<int, int>>());
        for(auto & i : p){
            res.emplace_back(names[i.second]);
        }

        return res;
    }
};