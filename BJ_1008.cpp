#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int a, b;
int sum = 0;
char d[1000001];
int E = 0;
int start = 0;
int main()
{
	while (1)
	{
		scanf("%s", &d);
		a = strlen(d);
		for (int i = 0; i < a; i++)
		{
			if (start == 0 && (d[i] >= 'a' || d[i] >= 'A'))
				start = 1;

			if (start == 1 && d[i] == 32 && (d[i + 1] >= 'a' || d[i + 1] >= 'A'))
			{
				printf("asdf");
				sum++;
			}
		}
		sum++;
	}
		

	printf("%d", sum + 1);
}