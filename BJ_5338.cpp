#include <iostream>

using namespace std;

int a, b;
int T;
int main()
{
	scanf("%d %d", &a, &b);
	scanf("%d", &T);
	a += T / 60;
	b += T % 60;

	a += b / 60;
	printf("%d %d", a % 24, b % 60);
}

	