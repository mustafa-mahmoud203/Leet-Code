class Solution {
public:
    int xsum( queue<int>q, int x){
        unordered_map<int,int>m;
        priority_queue<pair<int, int>> pq;
        int sum=0;
       while(!q.empty()){
        int val=q.front();
        q.pop();
        m[val]++;
       }

        for( auto it : m)
             pq.push({it.second, it.first});
        

        while(x-- && !pq.empty()){
            auto top = pq.top();
            pq.pop();
            sum += top.second * top.first;
        }
        return sum;
    } 
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        queue<int>q;
         vector<int>res;
        for(int i =0;i<k;i++)q.push(nums[i]);
        res.emplace_back(xsum(q,x));
         
         
        for(int i = k ; i < nums.size() ; i++){
            q.push(nums[i]);
            q.pop();
           res.emplace_back(xsum(q,x));  
            
        }
        return res;

    }
};