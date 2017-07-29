#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;
int arr[100003];
int DP[100003];
int T;
int main()
{
	scanf("%d", &T);
	int temp;
	for (int i = 3; i <= T+2; i++)
		scanf("%d", &arr[i]);

	for (int i = 3; i <= T+2; i++)
	{
		if (DP[i - 1] + arr[i] <= 0)
			DP[i] = arr[i];

		else
			DP[i] = max(DP[i - 1] + arr[i], arr[i]);
	}

	printf("%d", *max_element(DP + 3, DP + T + 3));


}