class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int mx=releaseTimes[0];
        char res=keysPressed[0];
        for(int i = 1; i< keysPressed.size();i++){
            int val=releaseTimes[i]-releaseTimes[i-1];
            if(val >=mx){
                if(val==mx){
                    res= keysPressed[i] > res ? keysPressed[i] : res; 
                    continue;
                }
                mx=val;
                res=keysPressed[i];
            }
        }
        return res;

    }
};