#include <iostream>

using namespace std;
		
int T = 2;

int arr[16];

long long sol;
int main()
{
	arr[1] = 2;
	for (int i = 2; i <= 16; i++)
	{
		arr[i] = arr[i - 1] * 2 - 1;
//		printf("%d ", arr[i]);
	}

	scanf("%d", &T);
	sol = arr[T + 1] * arr[T + 1];
	printf("%lld", sol);
}