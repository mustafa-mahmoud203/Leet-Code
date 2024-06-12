class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>temp=h;
        int res=0;
        sort(temp.begin(),temp.end());

        for(int i=0;i<h.size();i++){
            if(temp[i]!=h[i])res++;
        }
        return res;
    }
};