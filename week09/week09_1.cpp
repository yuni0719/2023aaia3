//最有錢的人, 有多少錢
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int M = accounts.size(); //有幾個人
      int N = accounts[0].size(); //這個人, 有幾個帳戶
      int ans = 0;
      for(int i=0; i<M; i++) { //第i個人
        int total = 0;
        for(int j=0; j<N; j++) { //他的第j個帳號
            total += accounts[i][j];
        }
        if(total>ans) ans = total; //迴圈後面 total 拿來用
      }  
      return ans;
    }
};