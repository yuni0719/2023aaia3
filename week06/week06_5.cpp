//可以把num裡, 任2字母交換, 找最大的數
class Solution {
public:
    int maximumSwap(int num) {
        int ans = num; //最簡單的答案, 就是本身
        string s = to_string(num); //stoi()反過來

        for(int i=0; i<s.length()-1; i++) { //左手i
            for(int j=i+1; j<s.length(); j++) { //右手j
                swap(s[i], s[j]); //交換s[i] s[j]兩數
                ans = max(ans, stoi(s)); //更新看是否更大
                swap(s[i], s[j]); //再交換回來
            }
        } 
        return ans;
    }
};