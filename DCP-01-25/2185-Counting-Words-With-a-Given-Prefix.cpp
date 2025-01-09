class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size(), res=0;
        for(string s : words){
            string temp=s.substr(0,n);
            res+=(temp==pref);
        }

        return res;
    }
};