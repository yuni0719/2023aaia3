//Advent of Code 2024 Day 1 題目
//Input 放在右下角的 stdin 的標準輸入區
//前面的Leetcode 幫妳寫好 #include<iostream> 和 #include <vector>
//都幫妳寫好了, 不用寫, 方便在遊樂場玩程式 using namespace std
int main() {
    vector<int> A, B; //2個陣列 (伸縮自如)
    int a, b; //兩個數
    while(cin >> a >> b) { //Step01: Input
        A.push_back(a); //Step02: 放到陣列
        B.push_back(b);
    }
    sort(A.begin(), A.end()); //Step04: sort 小到大排好
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size(); i++) { //Step03: Output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << "答案是: "<< ans;
}