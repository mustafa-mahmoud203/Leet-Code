class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int l=0,r=0, mn=nums[0], mx=nums[0], res=-1;
        multiset<int>st;
        while(r<nums.size()){
            st.insert(nums[r]);
            mn=*st.begin();
            mx=*st.rbegin();

            if(mx-mn>limit){
                st.erase(st.find(nums[l]));
                l++;
            }
             res=max(res, r-l);
            r++;
        }
        res=max(res, r-l);
        
        return res;
    }
};