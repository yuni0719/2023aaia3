#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int d50 = n / 50;
	int d5 = n%50 / 5;
	int d1 = n%5;
	printf("%d=50*%d+5*%d+1*%d\n", n, d50, d5, d1);
}