class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int N = digits.size();
       int carry = 1;
       for(int i=N-1; i>=0; i--) {
            digits[i] = digits[i] + carry;
            if(digits[i]>=10) { //大於等於, 進位
                carry = 1;
                digits[i] = digits[i] % 10; //餘數
            } else {
                carry = 0;
            }
       }

       if(carry==0) return digits; //沒有進位, 直接當答案
       else {
            vector<int> ans(N+1); //多1位(進位的carry)
            ans[0] = carry;
            for(int i=0; i<N; i++) {
                ans[i+1] = digits[i]; //左邊要避開 carry 的那一位
            }
            return ans;
       }
        
    }
};