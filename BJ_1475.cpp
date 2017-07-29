#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;
char room[1000001];

int main()
{
	vector<int> v;
	int arr[10];
	fill_n(arr, 10, 0);
	int check;
	int sol=0;
	int max = 0;


	
	fgets(room,sizeof(room)-1, stdin);
	for (int i = 0; i < strlen(room)-1; i++)
	{
		arr[room[i] - 48]++;
	}
	arr[9] += arr[6];
	arr[6] = 0;
	
	for (int i = 0; i < 9; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	if (max * 2 >= arr[9])
	{
		printf("%d", max);
	}
	else
	{
		arr[9] -= max * 2;
		printf("%d", max + (arr[9]+1)/2 );		
	}
	return 0;
}