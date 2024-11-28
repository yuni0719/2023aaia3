#include <iostream>
using namespace std;
int a[100][100]; //Step03:
int main()
{
	int T, N;
	cin >> T; //Step01: Input
	for(int t=1; t<=T; t++) {
		char c, c2; //'N' '=' 3
		cin >> c >> c2 >> N; //Step01: Input
		for(int i=0; i<N; i++) {
			for(int j=0; j<N; j++) {
				cin >> a[i][j]; //Step03: 2D Array
			}
		}
	cout << "Test #" << t << ": Symmetric.\n";
	}//Step02: Output
}