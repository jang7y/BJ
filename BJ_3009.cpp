#include <iostream>
#include <algorithm>
using namespace std;

int a[3];
int b[3];
int x, y, n, m;


int main()
{

	while (~scanf("%d %d", &x, &y))
		n ^= x, m ^= y;

	printf("%d %d", n, m);

	/*
	int n, m;
	int x = 0;
	int y = 0;
	while (~scanf("%d %d", &n, &m))
	{
		x = x^n;
		y = y^m;
	}
	printf("%d %d", x, y);

	*/
	
	/*
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	sort(a, a + 3);
	sort(b, b + 3);
	
	if (a[1] == a[0])
		printf("%d ", a[2]);
	else
		printf("%d ", a[0]);

	if (b[1] == b[0])
		printf("%d", b[2]);
	else
		printf("%d", b[0]);
		*/

}