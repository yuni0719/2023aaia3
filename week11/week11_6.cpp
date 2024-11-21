class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int N = arr.size();
        for(int i=0; i<N-2; i++) {
            if(arr[i] - arr[i+1] != arr[i+1] - arr[i+2] ) return false;
        } //如果不相同, 如果都沒有失敗, 就是成功
        return true;
    }
};