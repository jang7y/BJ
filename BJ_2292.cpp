#include <iostream>

using namespace std;


int main()
{
	int ans = 1;
	int T;
	int p = 6;
	int sum = 1;
	scanf("%d", &T);
	while (sum<T)
	{
		sum += p;
		p = p + 6;
		ans++;
	}
	printf("%d", ans);
}