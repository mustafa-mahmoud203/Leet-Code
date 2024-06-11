class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>m;
        vector<int>res;
        for(int &i : arr1)m[i]++;

        for(int &i : arr2){
            for(int j=0;j< m[i];j++)
                res.emplace_back(i);
            m[i]=0;
            
        }

        for(auto &i :m){
            for(int j=0; j<i.second;j++)
                res.emplace_back(i.first);
        }
        return res;
    }
};