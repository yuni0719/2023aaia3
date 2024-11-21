///想看看 Hash Map 的對照表強處
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{ ///大二上「資結演算法」 教的 Hash Map 雜湊法
    unordered_map<string,int> m; ///又小又快
    m["古靜璇"] = 12751134; ///左邊放字串, 右邊放int整數
    m["吳昱萱"] = 12750060;

    cout << "古靜璇的學號是:" << m["古靜璇"] << endl;
    cout << "吳昱萱的學號是:" << m["吳昱萱"] << endl;

}
