class Solution {
   bool isvalid(char a,char b){
    return (isupper(a)&&islower(b) && a==toupper(b));
   }
public:
    string makeGood(string s) {
        
        stack<char>st;
        string res="" ;
        for(char &c :s ){
            if(!st.empty()&& (isvalid(c , st.top()) ||isvalid(st.top() , c)))
                st.pop();
        
            else  st.push(c);
           
        }
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
           
        }
        reverse(res.begin(),res.end());
        return res;
    }
};