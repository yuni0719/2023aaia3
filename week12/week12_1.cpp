///想了解 Linked List 的 Node
///比較之前學過的 class vs. struct
#include <iostream>
using namespace std;
///struct Node {}; ///打好大括號, 就會生下括號、分號
///class Cat{};
struct Node {
    int val; ///value值
};
class Cat {
public:
    string name;
};
int main()
{
    Cat catl; ///大寫的形狀, 宣告 小寫的變數
    catl.name = "Kitty";
    Node node;
    node.val = 1;
}///執行時, 沒Compile Error 即可(程式只塞資料, 什麼都不做)
