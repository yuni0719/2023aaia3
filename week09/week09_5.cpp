//(頭尾包含)範圍內, 有幾個單數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2; //好像這個是答案, 但有時候會小一點
        if(low%2==1 || high%2==1) ans++; //因為, 如果頭尾有單數, 要在加1個數
        return ans;

    }
};