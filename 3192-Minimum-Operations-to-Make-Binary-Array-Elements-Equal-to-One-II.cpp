class Solution {
public:
    int minOperations(vector<int>& nums) {
        int flip=0;
        for(int &i : nums){
            if(flip & 1)i=1-i;
            if(i==0)flip++;
        }
        return flip;
    }
};