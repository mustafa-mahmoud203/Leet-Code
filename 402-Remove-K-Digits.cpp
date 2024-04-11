class Solution {
public:
    string removeKdigits(string s, int k) {
      int n=s.size();
        if(n==k) return \0\;
       stack<char>st;
        string res=\\;
        for(char &c : s){
            while(!st.empty()&& k>0&& st.top()>c){
                st.pop();
                k--;
            }    
            st.push(c);
        }

        while(!st.empty()&& k>0){
                st.pop();
                k--;
            } 

            while(!st.empty()){
                res+=st.top();
                st.pop();
            } 
            reverse(res.begin(),res.end());

            for(int i=0; i<res.size();i++){
                if(res[i]!='0'){
                    res=res.substr(i);
                    break;
                }
            }
     return (res[0]=='0'?\0\:res);   
    }
};

