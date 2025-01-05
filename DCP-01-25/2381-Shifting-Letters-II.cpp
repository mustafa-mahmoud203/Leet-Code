class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int>pref(n+1,0);
        for(auto vec : shifts){
            int start=vec[0];
            int end=vec[1];
            int operation=vec[2];
            if(operation==0){
                pref[start]--;
                if(end+1<n)pref[end+1]++;
            }
            else{
                pref[start]++;
                if(end+1<n)pref[end+1]--;
            }
        }

        for(int i=1;i<n+1;i++){
            pref[i]+=pref[i-1];
        }

        for(int i=0;i<n;i++){
            if(pref[i]>0){
                s[i]='a'+ (s[i] - 'a' + pref[i])%26;
            }
            else if(pref[i]<0){
                  s[i]='a'+ (s[i] - 'a' +26 + (pref[i]%26))%26;
            }
        }
        return s;
    }
};