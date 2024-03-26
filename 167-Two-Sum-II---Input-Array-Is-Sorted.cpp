class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    //  int l=0,r=numbers.size()-1;
    //  while(l<r){
    //     if(numbers[l]+numbers[r]==target)return {++l , ++r};
    //     if(numbers[l]+numbers[r]>target)r--;
    //     else l++;
    //  }
    //  return {0,0};
    unordered_map<int,int>m;
    for(int i=0;i<numbers.size();i++){
        if(m.find(target-numbers[i])==m.end()) m[numbers[i]]=i;
        else{
            int val=target-numbers[i];
            cout<<val;
           return {++m[val], ++i };
        }
    }
return {0,0};
    }

};