#include <iostream>

using namespace std;

int T;
int main()
{
	long long a, b, c;
	a = 1;
	b = 2;
	scanf("%d", &T);
	for (int i = 3; i <=T; i++)
	{
		c = (a%10007 + b%10007)%10007;
		a = b; 
		b = c;
	}
	if (T == 1)

		printf("1");
	else if (T == 2)
		printf("2");

	else
		printf("%lld", c%10007);

}