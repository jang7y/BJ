#include <iostream>
#include <vector>

using namespace std;

int T = 99;
char arr[4];
int a, b, c;
int temp;
int main()
{

	scanf("%s", arr);
	if (atoi(arr) < 100)
	{
		printf("%d", atoi(arr));
		return 0;
	}
	else
	{
		for (int i = 100; i <= atoi(arr); i++)
		{
			a = i / 100;
			temp = i % 100;
			b = temp / 10;
			c = temp % 10;
			if (a - b == b - c)
			{
				T++;
			}

		}

	}
	printf("%d", T);
	return 0;

}