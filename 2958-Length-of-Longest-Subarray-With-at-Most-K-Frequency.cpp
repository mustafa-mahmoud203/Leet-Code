class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int ,int >m;
        int mx=INT_MIN, l=0,r=0,max_len=0;

        while(r<nums.size()){
            m[nums[r]]++;
            mx=max(mx,m[nums[r]]);

            while(mx>k){
                max_len=max(max_len, r-l);
                mx-=(mx== m[nums[l]]);
                m[nums[l++]]--;
            }    
            r++;
        }
        return max(max_len,r-l);
    }
};