///�Q�ݬ� Hash Map ����Ӫ�j�B
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{ ///�j�G�W�u�굲�t��k�v �Ъ� Hash Map ����k
    unordered_map<string,int> m; ///�S�p�S��
    m["�j�R�"] = 12751134; ///�����r��, �k���int���
    m["�d�R��"] = 12750060;

    cout << "�j�R梪��Ǹ��O:" << m["�j�R�"] << endl;
    cout << "�d�R�����Ǹ��O:" << m["�d�R��"] << endl;

}
