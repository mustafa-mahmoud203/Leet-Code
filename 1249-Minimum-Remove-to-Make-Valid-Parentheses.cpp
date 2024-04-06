class Solution {
public:
    string minRemoveToMakeValid(string s) {
    int cnt=0;
    string res="";
    for(char &c :s){
        if(c==')'){
            if(cnt==0){
                c='*';
                continue;
            }
            else cnt--;
        }
        else if(c=='(')cnt++;
    }
    cnt=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='('){
            if(cnt==0){
                s[i]='*';
                continue;
            }
            else cnt--;
        }
        else if(s[i]==')')cnt++;
    }
     for(char &c :s){
        if(c!='*')res+=c;
     }
    return res;
    }
};

 