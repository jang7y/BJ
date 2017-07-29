#include <iostream>

using namespace std;

int arr[10];
int sum = 0;
int DP[10];
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	sum -= 100;
	for (int i = 1; i < 9; i++)
	{
		for (int j = i + 1; j <= 9; j++)
		{
			if (arr[i] + arr[j] == sum)
				arr[i] = arr[j] = 0;
		}
	}
	
	for (int i = 1; i <= 9; i++)
	{
		if (arr[i] != 0)
			printf("%d\n", arr[i]);
	}
}