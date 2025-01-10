class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        unordered_map<char, int> m, cnt, temp;
        for (string s : words2) {
            for (char c : s)
                cnt[c]++;   

            for(auto it : cnt){
                if(m.find(it.first)!=m.end()){
                    char c=it.first;
                    m[it.first]=max(m[it.first],it.second);
                }
                else m[it.first]=it.second;
            }
            cnt.clear();

        }
        temp = m;
        bool f = 1;
        for (string s : words1) {
            for (char c : s) {
                if (m.find(c) != m.end()) {
                    m[c]--;

                    if (m[c] == 0)
                        m.erase(c);
                }
                if (m.size() == 0)
                    break;
            }

            if (m.size() == 0)
                res.emplace_back(s);
            m = temp;
        }
        return res;
    }
};