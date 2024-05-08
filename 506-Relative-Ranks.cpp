class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>qu;
        unordered_map<int,int>mp;
         vector<string>res;

         for(int &i :score)qu.push(i);

         int place=1;
         while(!qu.empty()){
            mp[qu.top()]=place;
            qu.pop();
            place++;
         }

           for(int &i :score){
            if(mp[i]==1)res.emplace_back(\Gold Medal\);
            else if(mp[i]==2)res.emplace_back(\Silver Medal\);
            else if(mp[i]==3)res.emplace_back(\Bronze Medal\);
            else res.emplace_back(to_string(mp[i]));
           }
           return res;

    }
};