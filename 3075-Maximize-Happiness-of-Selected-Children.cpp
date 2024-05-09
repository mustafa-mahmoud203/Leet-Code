class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.begin(),happiness.end());
        
         long long res=0;
         int  cnt=0,sz=0;
        while(k--){
           sz=happiness.size()-1;

            res+=( happiness[sz]-cnt >= 0 ? happiness[sz]-cnt : 0 );
            cnt++;
            happiness.pop_back();
        }

        return res;
    }
};