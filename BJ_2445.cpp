#include <iostream>

using namespace std;

int T;
int main()
{
	scanf("%d", &T);
	for (int j = 0; j < T; j++)
	{
		for (int i = 0; i < j; i++)
		{
			printf("*");
		}
		for (int i = 2 * T - 2 * (j + 1); i >= 0; i--)
		{
			printf(" ");
		}
		for (int i = 0; i < j; i++)
		{
			printf("*");
		}
		printf("\n");
	}

}