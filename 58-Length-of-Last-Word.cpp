class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp=\\;
        int ans=0;
        for(char &i: s){
            if(i==' '){
                if(temp!=\\) ans=temp.size();
               
                temp=\\;
                continue;
            }
            temp+=i;
        }
        
        return (temp!=\\ ? temp.size() : ans);
    }
};