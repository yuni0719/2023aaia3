#include <iostream>
using namespace std;
int main()
{
	int a, b; //Step01: Input
	while(cin >> a >> b) {
		while(a>0) { //Step03: Bo Pi Fa
			cout << a << " ";
			a = a / b;
		}
		cout << "Boring!\n";
	} //Step02: Output
}