class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int l=0, r=1, res=INT_MIN;
      
        while(r< nums.size()){
            if(nums[r]>nums[l]){
                res=max(res,nums[r]-nums[l]);
                r++;
            }
            else {
                l= r++;
              
                };
          
        }

        return ( res == INT_MIN ? -1 : res);
    }

};


