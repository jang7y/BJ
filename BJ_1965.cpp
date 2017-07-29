#include <iostream>
#include <algorithm>
using namespace std;

int arr[1003];
int DP[1003];
int T;
int main()
{
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d", &arr[i]);
		DP[i] = 1;
	}
	for (int i = 1; i <T ; i++)
	{
		for (int j = i + 1; j <= T; j++)
		{
			if (arr[i] < arr[j])
			{
				DP[j] = max(DP[i] + 1, DP[j]);
			}
		}
	}

	printf("%d", *max_element(DP, DP + T + 1));
}