class Solution {
public:
    bool isCircularSentence(string s) {
        
        string word="" ,last ="";
        if(s.back()!=s[0])return false;
        for(char c:s ){
            if(c == ' '){
                if(last.size()>0){
                    if(last.back()!=word[0])return false;
                }
                last=word;
                word="";
                continue;
            }
            word+=c;
        }
          if(last.size()>0){
                    if(last.back()!=word[0])return false;
                }

    return true;
    }
};