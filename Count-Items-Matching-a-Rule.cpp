class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx = ruleKey == "type" ? 0 : ruleKey == "color" ? 1 : 2 , res=0;
        for(auto v : items){
            res+=(v[idx]==ruleValue);
        }

        return res;
    }
};