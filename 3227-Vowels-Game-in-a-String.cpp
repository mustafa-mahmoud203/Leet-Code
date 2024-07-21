class Solution {

public:
   
    bool doesAliceWin(string s) {
        unordered_map<char,int>mp;
        string vowels ="aeiou";
        for( char &i :vowels )mp[i]++;
        int cnt=0;
        for(char &c :s){
            cnt+=(mp[c]);
        }
        if(cnt==0)return false;
        // if(cnt&1)return true;

        return true;
    }
};