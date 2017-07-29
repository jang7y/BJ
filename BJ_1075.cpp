#include <iostream>
#include <cstring>
//#include <string>

using namespace std;

char arr[11];
int T;
int main()
{
	scanf("%s", arr);
	scanf("%d", &T);

	arr[strlen(arr) - 1] = arr[strlen(arr) - 2] = '0';
	for (int i = atoi(arr);; i++)
	{
		if (i%T == 0)
		{
			if (i % 100 < 10)
			{
				printf("0");
				printf("%d", i % 100);
			}
			else
				printf("%d", i % 100);
			return 0;
		}
	}
}