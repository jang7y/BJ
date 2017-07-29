#include <iostream>

using namespace std;

int hotel[100][100];
int T;
int sol = 0;
int main()
{
	int w, h, n;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d", &h, &w, &n);
		if (n%h == 0)
		{
			printf("%d",h);
		}
		else
			printf("%d", n%h);

		if (n / h < 9)
		{	
			if (n%h == 0)
			{
				printf("0%d\n", n / h);
			}
			else
				printf("0%d\n", n / h + 1);
		}
		else if (n / h == 9)
		{
			if (n%h == 0)
			{
				printf("0%d\n", n / h);
			}
			else
			{
				printf("%d\n", n / h + 1);
			}
		}
		else
		{
			if (n%h == 0)
			{
				printf("%d\n", n / h);
			}
			else
				printf("%d\n", n / h + 1);
		}
	}
}