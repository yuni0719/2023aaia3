//把兩個字串, 交錯合在一起
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans; //宣告一個字串, 當答案
        //for迴圈, 只要有一個字串長度還沒過, 就繼續
        for(int i=0; i<word1.length() || i<word2.length(); i++) {
            if(i<word1.length()) ans += word1[i]; //增加一個字母
            if(i<word2.length()) ans += word2[i]; //增加一個字母
        }
        return ans; //把答案送出去

    }
};