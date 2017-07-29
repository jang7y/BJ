#include <iostream>

using namespace std;
long long DP[101][13];
long long sum = 0;
int T;
int main()
{
	for (int i = 1; i <= 9; i++)
		DP[1][i] = 1;

	scanf("%d", &T);

	for (int i = 2; i <= T; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				DP[i][j] = DP[i - 1][1];
			}

			else if (j == 9)
			{
				DP[i][j] = DP[i - 1][8];
			}
			else
			{
				DP[i][j] = ((DP[i - 1][j - 1]%10000000000) + (DP[i - 1][j + 1])%10000000000) %10000000000;
				
			}
		}

	}
	for (int j = 0; j <= 9; j++)
	{
		sum =( sum % 10000000000 + DP[T][j] % 10000000000) % 10000000000;
	}
	printf("%ld", sum % 1000000000);

}