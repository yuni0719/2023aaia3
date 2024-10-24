class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; //一開始在(0, 0)位置
        for(char c : moves) { //針對每一個移動的字母
            if(c=='U') y--; //往上
            if(c=='D') y++; //往下
            if(c=='R') x++; //往右
            if(c=='L') x--; //往左
        }
        if(x==0 && y==0) return true; //還留在(0,0)就成功
        else return false;
    }
};