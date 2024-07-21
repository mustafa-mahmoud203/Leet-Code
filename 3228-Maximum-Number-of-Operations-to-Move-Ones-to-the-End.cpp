class Solution {
public:
    int maxOperations(string s) {
        int ones=0, res=0;
        for(int i=0;i<s.size()-1;i++){
            ones+=(s[i]=='1');
            if(s[i]=='0'&&s[i+1]=='1')res+=ones;
        }
        if(s[s.size()-1]=='0')res+=ones;
        return res;
    }
};