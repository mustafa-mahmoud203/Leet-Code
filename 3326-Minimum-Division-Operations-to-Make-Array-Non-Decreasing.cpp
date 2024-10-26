class Solution {
public:
    int lowestPrimeFactor(int x){
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return i;
        }
        return x;
    } 
    int minOperations(vector<int>& nums) {
        int res=0;

       for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                res++;
                nums[i]=lowestPrimeFactor(nums[i]);
            }
             if(nums[i]>nums[i+1])return -1;
        }
        
        return res;
    }
};