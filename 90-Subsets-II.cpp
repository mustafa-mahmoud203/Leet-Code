class Solution {
public:
    void rec(set<vector<int>>&st, vector<int>&temp,  vector<int>&nums,int pos){
        if(pos==nums.size()){
            st.insert(temp);
            return;
        }
        
        temp.emplace_back(nums[pos]);
        rec(st,temp,nums,pos+1);
        
         temp.pop_back();

            // while(pos+1<nums.size()&&nums[pos]==nums[pos+1])pos+=1;

         rec(st,temp,nums,pos+1);
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       set<vector<int>>st;
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>temp;
        rec(st,temp,nums,0);
        for(auto i : st)res.emplace_back(i);
        return res;
    }
};