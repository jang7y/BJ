#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

unsigned long long arr[1002][1002];
int a, b;
int k = 1;
int main()
{
	scanf("%d %d", &a, &b);
	arr[1][1] = 1;
	for (int i = 2; i <= max(a,b); i++)
	{
		arr[i][1] = 1;
		arr[1][i] = 1;
	}

	for (int i = 2; i <= a; i++)
	{
		for (int j = 2; j <= b; j++)
		{
			arr[i][j] = (arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1]) % 1000000007;
		}
	}
	


	printf("%lu", arr[a][b]);
//	printf("%u", arr[a][b]%1000000007);
}