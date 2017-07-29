#include <iostream>
#include <string>
using namespace std;

char* color[] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
long long k = 1;
char temp[20];
int sum = 0;
int main()
{
	for (int i = 0; i < 2; i++)
	{
		//scanf("%s", temp);
		scanf("%s", temp);

		for (int j = 0; j < 10; j++)
		{
			if (!strcmp(color[j], temp))
			{
				sum += j;
				sum = sum * 10;

			}
		}
	}
	sum = sum / 10;
	scanf("%s", temp);
	for (int i = 0; i < 10; i++)
	{
		if (!strcmp(temp, color[i]))
		{
			printf("%lld", k*sum);
			return 0;
		}
		k *= 10;
	}
}