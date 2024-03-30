class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        // sort(possible.begin(),possible.end());
        int a=0,b=0;
        for(int &i:possible){
            if(i==0)a--;
            else a++;
        }
        
        for(int i=0;i<possible.size()-1;i++){
            
             if(possible[i]==1){
                   b++;
                   a--;
                   
               }
            else b--,a++;
            if(b>a)return i+1;
        }
        return -1;
    }
};