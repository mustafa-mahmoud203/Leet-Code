class Solution {
public:
    int passThePillow(int n, int time) {
        int pos=1, x=1;
        while(time--){
            if(pos==1)x=1;
            if(pos==n)x=-1;
            pos+=x;
        }
        return pos;
    }
};