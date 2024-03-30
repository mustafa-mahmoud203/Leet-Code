class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx= *max_element(nums.begin(),nums.end()) , n=nums.size() ,l=0,r=0 ,cnt=0 ;
        long long res=0;
        while(r<n){
            cnt+=(mx==nums[r]);
            while(cnt>=k){
                res+=(n-r);
                if(mx==nums[l])
                    cnt--;
                l++;
            }
            r++;
        }
        return res;
    }
};

