#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 1;
	int c;
	int T;
	scanf("%d", &T);
	if (T == 0)
	{
		printf("0");
		return 0;
	}
	else if (T == 1)
	{
		printf("1");
		return 0;
	}
	for (int i = 2; i <= T; i++)
	{
		c = a + b;
		a = b; 
		b = c;
	}
	printf("%d", c);
}