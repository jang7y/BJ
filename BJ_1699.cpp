#include <iostream>
#include <algorithm>

using namespace std;

int DP[100003];
int dp[100003];

int main()
{

	int T;
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 3;
	scanf("%d", &T);

	for (int i = 4; i <= T; i++)
	{
		DP[i] = 987654321;
	}
	for (int i = 2; i <= 100; i++)
	{
		DP[i*i] = 1;
	}
	int k = 3;

	for (int i = 5; i <= T; i++)
	{
		for (int j = 2; j*j <= i; j++)
		{
			DP[i] = min(DP[i - j*j] + 1, DP[i]);
		}
	}

	printf("%d ", DP[T]);

	

}