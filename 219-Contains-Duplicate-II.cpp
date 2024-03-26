class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
        
        unordered_map<int,int>m;
        for(int i=0;i<v.size();i++){
           
            if(m.find(v[i])!=m.end()){
                if(abs(m[v[i]]-i)<=k)return true;
                
            }
            m[v[i]]=i;
            
        }
        return false;
    }
};