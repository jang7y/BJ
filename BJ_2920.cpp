#include <iostream>

using namespace std;

int asc[9];
int des[9];
int check = 0;
int arr[9];
int dcheck = 0;

int main()
{
	for (int i = 1; i <= 8; i++)
	{
		asc[i] = i;
		des[i] = 9 - i;
	}
	for (int i = 1; i <= 8; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == i)
		{
			check++;
		}
		if (arr[i] == 9 - i)
		{
			dcheck++;
		}
	}

	if (check == 8)
	{
		printf("ascending");
	}
	else if (dcheck == 8)
	{
		printf("descending");
	}
	else
		printf("mixed");
}