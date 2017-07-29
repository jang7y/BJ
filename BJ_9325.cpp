#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;
int money;
int arr[4] = {0 ,1, 0, 0 };

int temp;
int sum = 0;
int a, b;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d", &a, &b);
		swap(arr[a], arr[b]);
	}
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == 1)
			printf("%d", i);
	}
}