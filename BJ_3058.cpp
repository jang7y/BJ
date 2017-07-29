#include <iostream>
#include <algorithm>

using namespace std;

int sum = 0;
int T;
int temp;
int m = 987654321;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		for (int i = 0; i < 7; i++)
		{
			scanf("%d", &temp);
			if (temp % 2 == 0)
			{
				sum += temp;
				m = min(temp, m);
			}

		}
		printf("%d %d\n", sum, m);
		sum = 0;
		m = 987654321;
	}
}