#include <iostream>
#include <algorithm>

using namespace std;
int T;
int arr[10003];
//int DP[2][10003];
int DP[10003];
int M = -1;
int main()
{
	scanf("%d", &T);
	for (int i = 3; i <= T+2; i++)
		scanf("%d", &arr[i]);
	
	for (int i = 3; i <= T + 2; i++)
	{
		DP[i] = max(DP[i - 1], max(DP[i - 2] + arr[i], DP[i - 3] + arr[i - 1] + arr[i]));
		//DP[i] = max(DP[i - 2] + arr[i], max(DP[i - 1], DP[i - 3] + arr[i - 1] + arr[i]));
	}

	printf("%d", DP[T+2]);
}