class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, bool>mA, mB;
        vector<int>res;
        int cnt=0;
        for(int i=0 ; i<A.size();i++){
            mA[A[i]]=1 , mB[B[i]]=1 ;
            cnt+=(mB[A[i]] == 1);
            cnt+=(mA[B[i]] == 1);
            if(A[i]== B[i] && cnt > 0)cnt--;
            res.emplace_back(cnt);
        }

        return res;
    }
};