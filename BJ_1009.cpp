#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int T;
int a, b;
int temp = 0;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d", &a, &b);
		temp = a;
		for (int i = 0; i < b-1; i++)
		{
			temp = temp*a;

			temp = temp % 10;

		}
		if (temp == 0)
			printf("10\n");
		else
			printf("%d\n", temp);
	}
}