#include <iostream>
#include <algorithm>

using namespace std;

int sum = 0;
int arr[1004][1004];
int computer, T;
int main()
{
	for (int i = 0; i < 1004; i++)
	{
		for (int j = 0; j < 1004; j++)
		{
			arr[i][j] = 987654321;
		}
	}
	scanf("%d", &computer);
	scanf("%d", &T);
	int a, b, c;
	while (T--)
	{
		scanf("%d %d %d", &a, &b, &c);
		arr[a][b] = c;
	}

	for (int k = 1; k <= computer; k++)
	{
		for (int i = 1; i <= computer; i++)
		{
			for (int j = 1; j <= computer; j++)
			{
				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
			}
		}
	}
//	for (int i = 1; i < computer; i++)
//	{
//		sum += arr[i][i + 1];
//	}
	printf("%d", arr[1][6]);
}