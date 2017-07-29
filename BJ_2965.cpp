#include <iostream>


using namespace std;
int a, b, c;
int jump = 0;
int main()
{
	scanf("%d %d %d", &a, &b, &c);

	while (1)
	{
		if (b-a==1 && c-b == 1)
		{
			printf("%d", jump);
			break;
			
		}
		else if (b - a <= c - b)
		{
			a = b;
			b = b + 1;
			jump++;
		}

		else if (b - a > c - b)
		{
			c = b;
			b = c - 1;
			jump++;
		}

	}
}