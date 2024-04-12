class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 ) 
            return s;

        vector<vector<char>> arr(numRows+1);
        string res=\\;
        int idx=1, val=1;

         for(char &c : s){
            arr[idx].emplace_back(c);
            if(idx==1) val = 1;
           
            else if(idx==numRows) val = -1;
            
            idx+=val;
         }
       
         for(auto & i :arr){
            for(char &c : i) res+=c;
        }   

        return res;    
    }
};