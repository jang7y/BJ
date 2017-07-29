#include <iostream>
#include <algorithm>
#include <math.h>
#include <cstring>
using namespace std;

int arr[10];
int sol = 10;
char page[11];
int main()
{
	int temp = 0;
	int k;
	scanf("%s", page);
	k = atoi(page);
	for (int i = 1; i <= k; i++)
	{
		temp = i;
		if (temp >= 10)
		{
			while (temp / 10 > 0)
			{
				arr[temp % 10]++;
				temp = temp / 10;

			}
			
		}
		arr[temp]++;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}