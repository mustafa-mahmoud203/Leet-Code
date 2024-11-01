class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        res+=s[0];
        int cnt=0; 
       
        for(int i=1; i<s.size();i++){
            if(s[i]==res.back())cnt++;
            else cnt=0;
            if(cnt>1)continue;
            res+=s[i];
            
        }
       
        return res;
    }
};