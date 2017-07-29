#include <iostream>

using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 1; j < 2 * (T - i); j++)
			printf("*");

		printf("\n");
	}
}