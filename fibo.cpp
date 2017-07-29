#include <iostream>
#include <ctime>

using namespace std;

unsigned long long DP[100000000];
int main()
{
	clock_t dp1, dp2, temp1, temp2;
	dp1 = clock();
	DP[0] = 1; 
	DP[1] = 1; 
	for (int i = 2; i < 100000000; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2];
	}
	dp2 = clock();
	temp1 = clock();
	unsigned long long a, b, c;
	a = 1;
	b = 1;
	for (int i = 2; i < 100000000; i++)
	{
		c = a + b; 
		a = b; 
		b = c;
	}
	temp2 = clock();

	printf("%lld %lld\n", DP[99999999], c);
	printf("수행시간 : %lf %lf\n", (dp2 - dp1) / (double)CLOCKS_PER_SEC, (temp2 - temp1) / (double)CLOCKS_PER_SEC);
}