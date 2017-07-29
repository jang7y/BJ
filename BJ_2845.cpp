#include <iostream>

using namespace std;

int T;
int num;
int j = 0;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &num);

		while (num > 1)
		{
			if (num % 2 == 1)
			{
				printf("%d ", j);
			}
			j++;
			num = num / 2;
		}
		if (num == 1)
		{
			printf("%d", j);
		}

		j = 0;
	}




}