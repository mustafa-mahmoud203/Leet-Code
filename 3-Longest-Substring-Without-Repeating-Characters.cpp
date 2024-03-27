class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int>m;
        int l=0,r=0,res=0;
        while(r<s.size()){
            m[s[r]]++;
            while(m[s[r]]>1){
                res=max(res,r-l);
                m[s[l]]--;
                l++;
            }
            r++;
        }
         res=max(res,r-l);
        return res;
    }
};