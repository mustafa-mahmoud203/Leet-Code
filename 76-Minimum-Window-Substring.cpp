class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size())
            return \\;
       unordered_map<char,int>m;
       int l=0,r=0,min_len=INT_MAX, count=t.size(),pos=0;
       for(char&c: t)m[c]++;
       while(r<s.size()){
        if(m.count(s[r]) && m[s[r]]>0)count--;
        
        m[s[r]]--;

        while(!count){
            if(min_len>r-l+1){
                min_len=r-l+1;
                pos=l;
            }
            m[s[l]]++;
            
            if(m[s[l]]>0)count++;
           
            l++;
        }
     r++;
    }
       return (min_len==INT_MAX?\\ :s.substr(pos,min_len));
    }
};