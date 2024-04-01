class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0, copy=x;
        
        while(copy>0){
            sum+=(copy%10);
            copy/=10;
        }
        return (x%sum==0?sum:-1);
    }
};