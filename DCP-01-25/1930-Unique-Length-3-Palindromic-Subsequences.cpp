class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char,vector<int>>mp;
        unordered_set<string>st;
        string temp="";
        int res=0;
        for(int i=0 ;i< s.size();i++){
            mp[s[i]].emplace_back(i);
        }
        for(auto & it : mp){
            st.clear();
            vector<int> vec=it.second;
            for(int i= vec[0]+1; i<vec.back() ; i++){
                temp = it.first + s[i] + it.first;
                st.insert(temp);
            }
            
            res+=st.size();
        }

        return res;

    }
};

// b=4
// a=2
//c=1
//b 0 1 3 5
//a 4 6
//c 2  