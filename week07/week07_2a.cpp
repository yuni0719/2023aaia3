//井字遊戲
class Solution {
public:
    void myPrintBoard(int board[3][3]) {
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
       int board[3][3] = {}; //裡面都放0
       int now = 1; //第1個下的人, 叫 1:"A", 2:"B"
       for(auto move : moves) { //用 auto 他會幫你寫好
        int i = move[0], j = move[1];
        board[i][j] = now; //改成now
        myPrintBoard(board);
        now = 3 - now; //1變2, 2變1, 1變2, 2變1
       } 
       return "A"; //勝利的是誰?
    }
};