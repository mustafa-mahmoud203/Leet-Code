class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz=nums.size(), n=sz;
        vector<int>ans;
        k=k%sz;
        int pos=sz-k;
        while(sz--){
            ans.emplace_back(nums[pos%n]);
            pos++;
        }
        nums=ans;

    }
};

