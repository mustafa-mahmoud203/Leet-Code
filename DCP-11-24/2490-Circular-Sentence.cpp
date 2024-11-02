class Solution {
public:
    bool isCircularSentence(string s) {
        
        string word="" ,last ="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]== ' '){
                if(s[i-1]!=s[i+1])return false;
            }
        }
       
    return (s.back()==s[0]);
    }
};