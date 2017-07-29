#include <iostream>

using namespace std;

int T;
long long DP[100001][4];
int main()
{
	scanf("%d", &T);
	DP[0][0] = 1;
	DP[1][0] = DP[1][1] = DP[1][2] = 1;

	for (int i = 2; i <= T; i++)
	{
		DP[i][0] = (DP[i - 1][0]%9901 + DP[i - 1][1]%9901 + DP[i - 1][2]%9901)%9901;

		DP[i][1] = (DP[i - 1][2]%9901 + DP[i - 1][0]%9901)%9901;

		DP[i][2] = (DP[i - 1][1] %9901 + DP[i - 1][0]%9901) %9901;

	}
	printf("%lld", ((DP[T][0] % 9901) + (DP[T][1] % 9901) + DP[T][2]%9901) % 9901);


}