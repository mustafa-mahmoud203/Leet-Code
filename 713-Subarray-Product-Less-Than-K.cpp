class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<2)return 0;
        int n=nums.size();
        int l=0,r=0,res=0,mul=1;
        while(r<n){
            mul*=nums[r];
            while( mul>=k){
                mul/=nums[l++];
            }
            res+= r-l+1;
            r++;
        }

    return res;
    }
};

//10,
//10 5,
//10 5 2
//10 5 2 6   4 5 6 7 

//5 2 6 
// 2 6 
// 6 