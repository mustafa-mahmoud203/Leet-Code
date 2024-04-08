class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt=sandwiches.size();
        unordered_map<int ,int >m;
         for(int &i :students)m[i]++;
          
         for(int &i :sandwiches){
            if(m[i]==0){
                return m[0]+m[1];
            }
            else m[i]--;
         }
        
        
        // queue<int>qu;
        //  for(int &i :students)
        // qu.push(i);
        // int pos=0;
        // for(auto &i :qu){
        //     if(i==sandwiches[pos]){
        //         cnt--;
        //         pos++;
        //         qu.pop();
        //     }
        //     else qu.push(i);

        // }
        return 0;
    }
};

//sandwiches = [0,1,1]
 //students =[1,1,1],