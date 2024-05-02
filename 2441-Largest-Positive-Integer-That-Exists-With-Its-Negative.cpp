class Solution {
public:
            // TOW POINTER SOLUTION//

    // int findMaxK(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     int l=0,r=nums.size()-1;
    //     while(l<=r){
    //         if(-nums[l]==nums[r])  return nums[r];

    //         if(-nums[l]<nums[r]) r--;
             
    //         else l++;

    //     }
    // return -1;
    // }


        // HASH MAP SOLUTION//
    int findMaxK(vector<int>& nums) {
       unordered_map<int,bool>m;
       int mx=INT_MIN;
        for(int &i:nums){
             m[i]=1;
           if( m.find(-i)!=m.end())
                mx=max(abs(i),mx);
       }

    return mx>0?mx: -1;
    }
};
    

