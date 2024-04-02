class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>ms,mt;
        for(int i=0;i<s.size();i++){
            if(!ms[s[i]]&&!mt[t[i]]){
                ms[s[i]]=t[i];
                mt[t[i]]=s[i];
            }
            }
        
            for(int i=0;i<s.size();i++){
                if(ms[s[i]]!=t[i]||mt[t[i]]!=s[i])return false;
            }
        return true;
    }
};