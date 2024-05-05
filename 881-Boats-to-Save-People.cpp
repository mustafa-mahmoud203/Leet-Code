class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int sum=0,res=0, l=0, r=people.size()-1;

        while(l<=r){
            if(people[l]+people[r]<=limit){
                r--;
                l++;
            }
           
            else r--;
           
           res++;     
        }

  
        return res;
    }
};

