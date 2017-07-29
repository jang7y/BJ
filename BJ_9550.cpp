#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int arr[31];
int T;
int N,K;
int temp;
int main()
{
	scanf("%d", &T);
	arr[1] = 1;
	for (int i = 2; i <= N; i++)
	{
		arr[i] = 2 * arr[i - 1] + 1;
	}

	while (T--)
	{
		scanf("%d", &N);

		printf("%d\n", arr[N]);

		
	}
}