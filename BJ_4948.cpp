#include <iostream>
#include <vector>

using namespace std;

int arr[51][4];
int T;
int num = 2;
int temp = 0;
int main()
{
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &arr[i][2], &arr[i][3]);
		arr[i][1] = i;
	}

	for (int i = 1; i < T; i++)
	{
		for (int j = i + 1; j <= T; j++)
		{
			if (arr[i][2] < arr[j][2] && arr[i][3] < arr[j][3])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	for (int i = 1; i <= T; i++)
	{
		printf("%d %d %d %d\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
	}
	
	arr[1][0] = 1;

	for (int i = 2; i <= T; i++)
	{
		if (((arr[i - 1][2] - arr[i][2])*(arr[i - 1][3] - arr[i][3]) < 0))
		{
			arr[i][0] = arr[i - 1][0];
			num++;
		}
		else
		{
			arr[i][0] = num++;
		}
	}
	printf("\n\n\n\n");
	for (int i = 1; i <= T; i++)
	{
		printf("%d %d %d %d\n", arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
	}

	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			if (arr[j][1] == i)
			{
				printf("%d ", arr[i][0]);
			}
		}
	}
}