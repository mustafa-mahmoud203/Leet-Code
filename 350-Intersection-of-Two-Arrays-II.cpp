class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        
        unordered_map<int ,int>mp;
        vector<int>ans;
        for(auto it:v1)mp[it]++;
        for(auto it:v2){
            if(mp[it]>0)ans.emplace_back(it);
            mp[it]--;
        }
        
        return ans;
    }
};