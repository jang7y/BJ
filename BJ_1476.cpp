#include <iostream>

using namespace std;
int a = 1;
int b = 1;
int c = 1;
int E = 0;
int S = 0; 
int M = 0;
int sol = 1;

int main()
{
	int e, s, m;
	scanf("%d %d %d", &e, &s, &m);

	while (!(a == e && b == s && c == m))
	{
		a = sol % 15+1;
		b = sol % 28+1;
		c = sol % 19+1;
		sol++;

	}
	printf("%d", sol);
}