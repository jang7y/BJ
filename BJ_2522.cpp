#include <iostream>

using namespace std;

int T;
int main()
{
	scanf("%d", &T);


	for (int i = 0; i < 2 * T - 1; i++)
	{
		if (i <= T-1)
		{
			for (int j = T-1; j > i; j--)
			{
				printf(" ");
			}
			for (int j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (int j = T; j <= i; j++)
			{
				printf(" ");
			}
			for (int j = i; j < 2*T-1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}