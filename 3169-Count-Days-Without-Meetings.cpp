class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int n=meetings.size(), cnt=0;
        sort(meetings.begin(),meetings.end());
            vector<vector<int>> mer;
            mer.emplace_back(meetings[0]);

        for(int i=1;i<n;i++){
            if(mer.back()[1]>=meetings[i][0])
                mer.back()[1]=max(mer.back()[1],meetings[i][1]);
            else mer.emplace_back(meetings[i]);    
        }
        for (auto i : mer) {
            cnt+= i[1] - i[0] + 1;
        }
       
        
        return days-cnt;
    }
};

