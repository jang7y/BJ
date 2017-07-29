#include <iostream>

using namespace std;

int T;
int temp;
int sum = 0;
int main()
{
	scanf("%d", &T);
//	temp = T;
	for (int i = 1; i <= 1000000; i++)
	{
		sum = i;
		temp = i;
		for (int j = 100000; j >= 1; j = j / 10)
		{
			if (temp / j == 0)
			{
				continue;
			}
			else
			{
				sum += temp / j;
				temp = temp%j;
			}
		}
		if (sum == T)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
}