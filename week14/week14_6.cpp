#include <iostream>
using namespace std;
int main()
{
	int a, b; 
	while(cin >> a >> b) {
		int bad = 0, backup = a;
		while(a>1) {
			if(a%b>0) bad = 1;
			a = a / b;
		
		}
		if(bad==1) cout << "Boring!\n";
		else {
			a = backup;
			while(a>0) { 
				cout << a << " ";
				a = a / b;
			}
			cout << "\n";
		}
	} 
}
		