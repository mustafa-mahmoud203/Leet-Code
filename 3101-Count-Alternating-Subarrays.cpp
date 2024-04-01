class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
         long long res=nums.size();
        int l=0,r=1;
        while(r<nums.size()){
             if(nums[r]==nums[r-1]){
                 while(l<r){
                     res+= r-l-1;
                     l++;
                 }
            }
            
           else if(r==nums.size()-1){
                while(l<r){
                    res+=(r-l);
                    l++;
                    
                    }
            }
            
                
                r++;
        }
        
        return res;
    }
};