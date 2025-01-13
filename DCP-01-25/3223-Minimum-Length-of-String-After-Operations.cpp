class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>m;
        int res=0;
        for(char c :s)m[c]++;

        for(const auto&[k , val] : m ){
            res+=(val & 1 ? 1 : 2);
        }
    return res;
    }
};