class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int res=0;
        int l=0;
        unordered_map<char,int>m;
       for(char c: s){
            m[c]++;
           while(m[c]==k){
                    m[s[l]]--;
                    l++;
                }
                
                res+=l;
            }

          return res;
        
        }
      
    
};