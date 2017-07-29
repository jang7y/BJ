#include <iostream>
#include <algorithm>

using namespace std;

int arr[51][51];

int a, b;
int M = -1;
int main()
{
	int temp = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			scanf("%1d", &arr[i][j]);
		}
	}
	for (int k = 1; k <= a; k++)
	{
		for (int i = 1; i < b; i++)
		{
			for (int j = i + 1; j <= b; j++)
			{
				if (arr[k][i] == arr[k][j])
				{
					temp = j - i;
					if (k + temp <= a && i + temp <= b)
					{
						if ((arr[k][i] == arr[k + temp][i]) && arr[k][i] == arr[k + temp][i + temp])
						{
							M = max(M, (temp + 1)*(temp + 1));
						}
					}
				}
			}
		}
	}
	if (M == -1)
		printf("1");
	else
		printf("%d", M);



}
