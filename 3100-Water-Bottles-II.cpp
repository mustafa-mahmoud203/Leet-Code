class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        
        int emp=numBottles, sum=numBottles;
        
         if(numExchange>numBottles)return numBottles;
        while(true){
            emp-=numExchange;
            numExchange++;
            sum++;
            emp++;
            if(numExchange>emp) return sum;
            }
        
        return sum;
    }
};