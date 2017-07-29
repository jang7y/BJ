#include <iostream>


using namespace std;
int x, y;
int M = -1;
int arr[10][10];
int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			scanf("%d", &arr[i][j]);
			if (arr[i][j] > M)
			{
				M = arr[i][j];
				x = i;
				y = j;
			}
		}
	}
	printf("%d\n", M);
	printf("%d %d", x, y);
}