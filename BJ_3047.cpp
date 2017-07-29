#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	int arr[4];
	char alg[4];
	scanf("%d %d %d\n", &arr[0], &arr[1], &arr[2]);
	scanf("%c %c %c", &alg[0], &alg[1], &alg[2]);

	sort(arr, arr + 3);
	printf("%d %d %d", arr[alg[0] - 65], arr[alg[1] - 65], arr[alg[2] - 65]);
	
}