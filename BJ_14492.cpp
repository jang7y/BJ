#include <iostream>
#include <vector>
using namespace std;
int T;
vector<int>A[300];
vector<int>B[300];
int temp;
int ret = 0;

int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < T; j++)
		{
			scanf("%d", &temp);
			A[i].push_back(temp);
		}
	}

	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < T; j++)
		{
			scanf("%d", &temp);
			B[i].push_back(temp);
		}
	}

	int k = 0;
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < T; j++)
		{
			for (int k = 0; k < T; k++)
			{
				if (A[i][k] == 1 && B[k][j] == 1)
				{
					ret++;
					break;
				}
			}
		}
	}
	printf("%d", ret);
}