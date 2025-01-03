class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int res=0; 
        long long total_sum=0, cur_sum=0;
        for(int i : nums){
            total_sum+=i;
        }
         for(int i=0 ; i< nums.size()-1 ; i++){
            cur_sum+=nums[i];
            if(cur_sum >= total_sum-cur_sum)res++;
         }

    return res;
    }
};

