class Solution {
public:
    vector<string> stringSequence(string target) {
        string s="a";
         vector<string>res;
        for(char c: target){
            while(c!=s.back()){
                res.emplace_back(s);
                if(s.back()=='z')s.back()='a';
                else s.back()++;
            }
            res.emplace_back(s);
            s+='a';
        }
        return res;
    }
};