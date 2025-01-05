class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int>pref(n+1,0);
        for(auto vec : shifts){
            int start=vec[0], end=vec[1], direction =vec[2];
            int value=(direction == 1) ? 1 : -1;
                pref[start]+=value;
                pref[end+1]-=value; 
        }

        for(int i=1;i<n+1;i++){
            pref[i]+=pref[i-1];
        }

        for(int i=0;i<n;i++){
            // if(pref[i]>0){
            //     s[i]='a'+ (s[i] - 'a' + pref[i])%26;
            // }
            // else if(pref[i]<0){
            //       s[i]='a'+ (s[i] - 'a' +26 + (pref[i]%26))%26;
            // }
            int shift=(s[i] - 'a' + pref[i])%26;
            if(shift<0)shift+=26;
            s[i]='a'+shift;
        }
        return s;
    }
};