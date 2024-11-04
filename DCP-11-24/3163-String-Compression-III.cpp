class Solution {
public:
    string compressedString(string word) {
        int cnt=0;
        char temp = word[0];
        string res="";
        for(char c : word ){
            if(temp==c){
                cnt++;
                if(cnt==9){
                    res+=to_string(9) + c;
                    cnt=0;
                }
            }
            else{
                if(cnt) res+=to_string(cnt)+temp;
                temp=c;
                cnt=1;
            }
            
        }
        if(cnt) res+=to_string(cnt)+temp;

        
        return res;
    }
};