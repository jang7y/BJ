#include <iostream>
#include <vector>

using namespace std;

int T, a, b;
int R = 1;
int main()
{
	scanf("%d %d %d", &T, &a, &b);
	while (1)
	{

		if (a % 2 == 1 && a + 1 == b)
		{
			printf("%d", R);
			return 0;
		}
		else if (b % 2 == 1 && b + 1 == a)
		{
			printf("%d", R);
			return 0;

		}
		if (a % 2 != 0)
		{
			a = (a + 1) / 2;
		}
		else
			a = a / 2;

		if (b % 2 != 0)
			b = (b + 1) / 2;
		else
			b = b / 2;
		
		R++;



		
		
	}
}