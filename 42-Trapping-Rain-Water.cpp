class Solution {
public:
    int trap(vector<int>& height) {

        int l=0,r=height.size()-1;
        int mxL=height[l] , mxR=height[r], ans=0;

        while(l<r){
            if(mxL<=mxR){
                l++;
                mxL=max(mxL,height[l]);
                ans+= mxL-height[l];
            }
            else{
                r--;
                mxR=max(mxR,height[r]);
                ans+= mxR-height[r];
            }
            
        }
        return ans;
    }
};