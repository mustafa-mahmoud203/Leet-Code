class Solution {
public:
int solve(int a, int b){
    int x=1,y=2, res=0;

    while(a>=0&&b>=0){
        if(a-x>=0){
            a-=x;
            res++;
        }
        else break;
        if(b-y>=0){
            b-=y;
            res++;
        }
        else break;

        x+=2;
        y+=2;
    }
    return res;
}
    int maxHeightOfTriangle(int red, int blue) {
        return max(solve(red,blue), solve(blue,red));
    }
};