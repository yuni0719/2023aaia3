///warning: range-based 'for' loops only available with -std=c++11 or -std=gnu++11
///Settings-Compiler ��-std=c+11��2011��C++�}�_��
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c:s) {
        cout << c << "\n";
    }
}
