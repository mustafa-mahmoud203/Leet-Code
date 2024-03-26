#define faster                 \\
  ios::sync_with_stdio(false); \\
  cin.tie(nullptr);            \\
  cout.tie(nullptr);
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        faster
        int n=10e5+1;
        vector<bool>check(n,0);
        for(int &i: nums){
            if(i>0 && i<=n)check[i]=1;
        }

        for(int i=1;i<n;i++){
            if(check[i]==0)return i;
        }

        return 0;
        
    }
};