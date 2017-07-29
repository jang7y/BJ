#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int al[27];
char first[1003];
char second[1003];
int DP[1003][1003];
int len1, len2;
int cnt = 0;
int main()
{
	for (int i = 1; i < 1003; i++)
	{
		for (int j = 1; j < 1003; j++)
			DP[i][j] = 0;
	}

	scanf("%s", first);
	scanf("%s", second);

	len1 = strlen(first);
	len2 = strlen(second);

		

	for (int i = 1; i <= len1; i++)
	{
		for (int j = 1; j <= len2; j++)
		{
			if (first[i-1] == second[j-1])
			{
				DP[i][j] = DP[i - 1][j - 1] + 1;
			}
			else
			{
				DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
			}
		}
	}

	printf("%d", DP[len1][len2]);
	
}