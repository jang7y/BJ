#include <iostream>

using namespace std;

int T;

long long DP[31][31];
int a, b;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		for (int i = 1; i <= 31; i++)
		{
			for (int j = 1; j <= 31; j++)
				DP[i][j] = 0;
		}

		scanf("%d %d", &a, &b);



		for (int i = 1; i <= b; i++)
		{
			DP[1][i] = i;
		}
		for (int i = 1; i <= a; i++)
			DP[i][i] = 1;

		for (int i = 2; i <= a; i++)
		{
			for (int j =  i+1; j<=b; j++)
			{
				for (int k = i - 1; k < j; k++)
				{
					DP[i][j] += DP[i - 1][k];
				}
			}
		}
	
		printf("%lld\n", DP[a][b]);
	}
}