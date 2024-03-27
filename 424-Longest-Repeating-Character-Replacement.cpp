class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>m;
        int l=0,r=0,res=0,mx=INT_MIN;
        while(r<s.size()){
            m[s[r]]++;
            mx=max(mx,m[s[r]]);
            if(r-l+1 - mx>k){
                  m[s[l++]]--;
            }
            res=max(res,r-l+1);
            r++;
        }
        return res;
   }
};
// ch = A
// res=4 

//   l         r
// A B A A B B A
// 0 1 2 3 4 5 6