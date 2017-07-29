#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a%b);
}
int n, m;
int main()
{
	scanf("%d:%d", &n, &m);
	printf("%d:%d", n/gcd(n,m), m/gcd(n,m));
	return 0;
}