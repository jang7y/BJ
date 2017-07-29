#include <iostream>

using namespace std;

int arr[2500][2500];
int T;
int a, b, c;
int main()
{
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			scanf("%d", arr[i][j]);
		}
	}

	for (int i = 1; i <= T; i =i + 3)
	{
		for (int j = 1; j <= T; j = j + 3)
		{

		}
	}

}