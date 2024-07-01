class Solution {
public:
    int findMaxLength(vector<int>& v) {
        unordered_map<int,int>m;
        int one=0 ,zero=0 ,res=0;
        m[0]=-1;
        for(int i=0;i<v.size();i++){
            one+=(v[i]==1);
            zero+=(v[i]==0);

            if(m.find(one-zero)==m.end())
                m[one-zero]=i;
            else res=max(res,i-m[one-zero]);
               
        }
     return res;       
    }
};