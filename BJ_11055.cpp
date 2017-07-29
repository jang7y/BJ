#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int DP[1004];
int M = -1;
int main()
{
	int T;
	scanf("%d", &T);
	arr.resize(T+1, 0);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d", &arr[i]);
		DP[i] = arr[i];
	}
	for (int i = 2; i <= T; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (arr[j] < arr[i])
			{
				DP[i] = max(DP[j] + arr[i], DP[i]);
			}

		}


	}
	//printf("%d", M);
	printf("%d", *max_element(DP, DP + T + 1));
}