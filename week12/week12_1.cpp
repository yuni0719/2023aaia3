///�Q�F�� Linked List �� Node
///������e�ǹL�� class vs. struct
#include <iostream>
using namespace std;
///struct Node {}; ///���n�j�A��, �N�|�ͤU�A���B����
///class Cat{};
struct Node {
    int val; ///value��
};
class Cat {
public:
    string name;
};
int main()
{
    Cat catl; ///�j�g���Ϊ�, �ŧi �p�g���ܼ�
    catl.name = "Kitty";
    Node node;
    node.val = 1;
}///�����, �SCompile Error �Y�i(�{���u����, ���򳣤���)
