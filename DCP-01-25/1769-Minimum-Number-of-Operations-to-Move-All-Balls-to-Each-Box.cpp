class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n, 0);

        int ballsToLeft = 0, movesToLeft = 0;
        int ballsToRight = 0, movesToRight = 0;

        //  calculate moves from both left and right
        for (int i = 0; i < n; i++) {
            // Left pass
            answer[i] += movesToLeft;
            ballsToLeft += boxes[i] - '0';
            movesToLeft += ballsToLeft;
            cout<<"answer["<<i<<"]  "<<answer[i]<<" ----- "<<"ballsToLeft "<<ballsToLeft<<" ---- "<<"movesToLeft "<<movesToLeft<<endl;
            // Right pass
            int j = n - 1 - i;
            answer[j] += movesToRight;
            ballsToRight += boxes[j] - '0';
            movesToRight += ballsToRight;
            cout<<"answer["<<j<<"]  "<<answer[j]<<" ----- "<<"ballsToRight "<<ballsToRight<<" ---- "<<"movesToRight "<<movesToRight<<endl;

        }

        return answer;
    }
};
