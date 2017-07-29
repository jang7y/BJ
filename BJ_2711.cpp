#include <iostream>
#include <cstring>

using namespace std;

char arr[1003];

int T;
int a;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		for (int i = 0; i < 1003; i++ )
		{
			arr[i] = 0;
		}
		scanf("%d", &a);
		scanf("%s", arr);
		for (int i = 0; i < strlen(arr); i++)
		{
			if (i == a - 1)
				continue;

			printf("%c", arr[i]);
		}
		printf("\n");
	}
}