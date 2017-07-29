#include <iostream>
#include <vector>

using namespace std;

int T;
int game;

int arr[101];
int sol[101];

int main()
{
	int temp;
	scanf("%d", &T);
	scanf("%d", &game);
	for (int i = 1; i <= game; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i <= game; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			scanf("%d", &temp);
			if (temp == arr[i])
			{
				sol[j]++;
			}
			else
			{
				sol[arr[i]]++;
			}
		}

	}
	for (int i = 1; i <= T; i++)
	{
		printf("%d\n", sol[i]);
	}
}