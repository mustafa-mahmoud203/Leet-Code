class Solution {
public:
    string reversePrefix(string word, char ch) {
        string res="";
        bool rev=1;
        for(char & c: word){
            res+=c;
            if(c==ch && rev){
                reverse(res.begin(),res.end());
                rev=0;
            }
        }
        return res;
    }
};