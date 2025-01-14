class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
         vector<int>ans;
         int c=0;
         unordered_map<int,bool>a,b;
         for(int i=0;i<A.size();i++){
             if(A[i]==B[i])   c++;
             else{
                if(a.find(B[i])!=a.end()) c++;
                if(b.find(A[i])!=b.end()) c++;
             }
             a[A[i]]=1 , b[B[i]]=1;
             ans.emplace_back(c);
         }
         return ans;
    }
};

