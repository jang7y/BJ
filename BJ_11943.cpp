#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int T;
char first[22];
char second[22];
int ans;
int main()
{
	int len;
	scanf("%d", &T);

	while (T--)
	{
		scanf("%s %s", first, second);
		len = strlen(first);
		printf("Distances: ");
		for (int i = 0; i < len; i++)
		{
			ans = second[i] - first[i];
			if (ans < 0)
				printf("%d ", 26 + ans);
			else
				printf("%d ", ans);
		}
		printf("\n");
	}
}