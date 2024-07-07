class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles, empty=numBottles, full=0;

        while(empty>=numExchange){
            full=empty/numExchange;
            empty=(empty%numExchange) +full;
            res+=full;
        }
        return res;
    }
};