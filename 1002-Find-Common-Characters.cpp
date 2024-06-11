class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char ,int>m1,m2;
         vector<string> res;

        for(char & c : words[0])m1[c]++;
     
        for(string &word : words){
            m2.clear();
              for(char & c : word)m2[c]++;

                for(auto &it :m1){
                    it.second=min(it.second, m2[it.first]);
                }
        }
        string s="";
        for(auto &it : m1){
            while(it.second>0){
                s=it.first;
                res.emplace_back(s);
                it.second--;
                
                }
          }

    return res;
    }
};