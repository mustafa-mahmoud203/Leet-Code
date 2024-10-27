class Solution {
public:
    int possibleStringCount(string word) {
        int res=1, cnt=0;
        for(int i=0;i< word.size()-1;i++){
            if(word[i]==word[i+1])cnt++;
            else res+=cnt , cnt=0;
        }

        if(cnt)res+=cnt;
        return res;
    }
};