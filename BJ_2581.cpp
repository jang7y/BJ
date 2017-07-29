#include <iostream>

using namespace std;
int arr[10005];
int sol = 0;
int m = 0;
int check = 0;
int main()
{
	int a, b;
	for (int i = 2; i*i <= 10000; i++)
	{
		for (int j = i*i; j <= 10000; j = j + i)
		{
			arr[j] = 1;
		}
	}

	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i == 1)
			continue;
		if (arr[i] == 0)
		{
			printf("%d ", i);
			sol += i;

			if (check == 0)
			{
				m = i;
				check = 1;
			}
		}
	}
	if (sol == 0)
	{
		printf("-1");
		return 0;
	}
	printf("\n");
	printf("%d\n", sol);
	printf("%d", m);

}