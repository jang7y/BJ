#include <iostream>

using namespace std;

int T;

int arr[1100];
int main()
{
	int sum = 0;
	int a, b;
	int t = 1;
	scanf("%d %d", &a, &b);
	for (int i = 1; i < 46; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			arr[t++] = i;
		}
	}
	for (int i = a; i <= b; i++)
		sum += arr[i];

	printf("%d", sum);
}