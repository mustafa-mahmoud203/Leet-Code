class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          vector<int>ans;
         int sum=1, zero=0;

       
         for(int &i: nums){
            (i==0)? zero++ : sum*=i;
         }
        
         for(int i=0; i<nums.size();i++){
            if(zero>1)ans.emplace_back(0);
            else if(zero==1){
                (nums[i]!=0)? ans.emplace_back(0) :ans.emplace_back(sum);
            }

            else ans.emplace_back(sum/nums[i]);

         }

    return ans;
    }
};