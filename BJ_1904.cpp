#include <iostream>

using namespace std;

int T;
//long long arr[1000001];
int a, b, c;
int main()
{
	scanf("%d", &T);
	a = 1;
	b = 2;
	for (int i = 3; i <= T; i++)
	{
		c = ((a%15746) + (b%15746))%15746;
		a = b;
		b = c;
	}
	printf("%d", c);

}