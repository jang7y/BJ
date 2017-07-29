#include <iostream>
#include <vector>

using namespace std;

int arr[101][101];

int a, b, c, d;
int cnt = 0;
char temp;

int T;
int A = 0;
int B = 0;
int main()
{

	scanf("%d", &T);
	while (T--)
	{
		cnt = 0;
		for (int i = 0; i < 101; i++)
		{
			for (int j = 0; j < 101; j++)
			{
				arr[i][j] = 0;
			}
		}
		scanf("%d %d", &a, &b);
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}

		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				if (arr[i][j] == 1)
				{
					for (int k = i + 1; k <= a; k++)
					{
						if (arr[k][j] == 0)
						{
							cnt++;
						}
					}
				}
			}
		}
		printf("%d\n", cnt);
	}
}