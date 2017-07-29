#include <iostream>
#include <algorithm>
#include <ctime>


using namespace std;


int arr[3][100005];
int DP[3][100005];
int T;
int main()
{
	clock_t begin, end;
	int a;
	scanf("%d", &T);
	while (T--)
	{

		for (int i = 0; i < T; i++)
		{
			arr[1][i] = 0;
			arr[2][i] = 0;
			DP[1][i] = 0;
			DP[2][i] = 0;
		}
		scanf("%d", &a);
		for (int i = 1; i <= 2; i++)
		{
			for (int j = 3; j <= a+2; j++)
				scanf("%d", &arr[i][j]);
		}

		for (int i = 3; i <= a+2; i++)
		{
		//	DP[1][i] = max(*max_element(DP[1],DP[1]+i-1), *max_element(DP[2], DP[2]+i)) + arr[1][i];
		//	DP[2][i] = max(*max_element(DP[2], DP[2]+i-1), *max_element(DP[1],DP[1]+i)) + arr[2][i];
			DP[1][i] = max(DP[2][i - 1], max(DP[1][i - 2], DP[2][i-2]))+arr[1][i];
			DP[2][i] = max(DP[1][i - 1], max(DP[2][i - 2], DP[1][i-2]))+arr[2][i];

			//printf("%d %d\n", DP[1][i], DP[2][i]);
		}

		printf("%d\n", max(*max_element(DP[1], DP[1] + a + 3), *max_element(DP[2], DP[2] + a + 3)));

	}
}