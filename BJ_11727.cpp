#include <iostream>
#include <vector>

using namespace std;

unsigned long long arr[1001];

int main()
{
	arr[1] = 1;
	arr[2] = 3;
	arr[3] = 5;
	int t;
	scanf("%d", &t);
	for (int i = 4; i <= t; i++)
	{
		arr[i] = ((arr[i - 1]) % 10007 + (arr[i - 2] * 2) % 10007) % 10007;
	}
	printf("%lld", arr[t] % 10007);
}