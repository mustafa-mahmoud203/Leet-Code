class Solution {
public:
    int maxDepth(string s) {
        int cnt=0, mx=0;
        for(char &c: s ){
            if(c=='(')cnt++;
            if(c==')'){
                mx=max(mx,cnt);
                if(cnt>0)cnt--;
            }
        } 
        return mx;
    }
};