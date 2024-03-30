class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        
        int res=INT_MAX;
        

        for(int i=0;i<nums.size();i++){
         int orr=0;
          for(int j=i; j<nums.size();j++){
            orr|=nums[j];
            if(orr>=k)res=min(res,j-i+1);
          }
        }
        return (res==INT_MAX?-1:res);
    }
};