class Solution {
public:
    int maxSum(vector<int>& nums) {
        //first Solution
      /* 
        unordered_map<int , bool>m;
       sort(nums.begin(), nums.end(),greater<int>());
        int res=nums[0];
        m[res]=1;
        for(int i=1; i< nums.size();i++){
            if(m.find(nums[i])!=m.end() || res>res+nums[i])continue;
            m[nums[i]]=1;
            res+=nums[i];
        }
        */

        //second selution
        unordered_map<int , bool>m;
        int res=0 , mx= -INT_MAX;
        for(int i :nums){
            mx=max(mx, i);
            if(m.find(i)!=m.end() || i<0)continue;
            m[i]=1;
            res+=i;
        }
        return mx < 0 ? mx : res;
    }
};