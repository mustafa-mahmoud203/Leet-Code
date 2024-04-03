class Solution {
public:
    int maxDistance(vector<int>& colors) {
         int left_max=0, rigth_max=0 , sz=colors.size();
      
        for(int i=1;i<sz;i++){
            if(abs(colors[0]-colors[i]) >0)left_max=i;
        }
        for(int i=sz-2;i>=0;i--){
            if(abs(colors[sz-1]-colors[i]) >0)rigth_max=sz-i-1;
        }
        return max(rigth_max,left_max);
    }
};
