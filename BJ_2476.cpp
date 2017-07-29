#include <iostream>
#include <algorithm>

using namespace std;

int T;
int arr[3];
int M = -1;
int money;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		sort(arr, arr + 3);
		if (arr[0]==arr[2])
		{
			money = 10000 + arr[1] * 1000;
		}
		else if (arr[1] != arr[0] && arr[1] != arr[2])
		{
			money = arr[2] * 100;
		}
		else
		{
			money = arr[1] * 100 + 1000;
		}
		M = max(M, money);
		

	}
	printf("%d", M);
}