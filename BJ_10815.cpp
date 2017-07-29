#include <iostream>

using namespace std;

int arr[20000000];
int main()
{
	int a;
	int T;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &a);
		if (a < 0)
		{
			arr[a*(-1)]++;
		}
		else
		{
			arr[a + 10000000]++;
		}
	}
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &a);
		if (a < 0)
		{
			printf("%d ", arr[a*(-1)]);
		}
		else
			printf("%d ", arr[a + 10000000]);
	}
}