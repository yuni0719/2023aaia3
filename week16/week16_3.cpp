class Solution {
public:
    double helper(double x, int n) { //函式呼叫函式
        if(n==0) return 1;
        double now = helper(x, n/2);
        if(n%2==0) return now * now;
        else return now * now * x; //奇數, 多成一個x
    }
    double myPow(double x, long long n) { //要改成很長、很長的整數
        double ans = 1; 
        if(n<0) { //遇到父的會失敗, 所以要把n變成正的
            n = -n; //n變成正的
            x = 1/x; //-1次方, 就是1/x
        }
        return helper(x, n); 
    }
};