class Solution {
public:
    void solve(vector<int>& nums, int target,int l, int r,int &res){
        if(l>r){
            res=-1;
            return ;
            }
        
        int mid=mid=l+(r-l)/2;
        if(nums[mid]==target){
            res=mid;
            return;
        } 
       
        if(nums[mid]>target)solve(nums,target,l,mid-1,res);
        else solve(nums,target,mid+1,r,res);

        // return ;
   
    }  

    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1, mid=0,res=0;
        solve(nums,target,l,r,res);
        return  res; 
       
    }
};