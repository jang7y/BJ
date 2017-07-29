#include <iostream>
#include <vector>
#include <math.h>
#include <cstring>

#include <algorithm>
using namespace std;
int T;
int arr[1000001];
int check = -1;
char num[100000];
int temp = 0;
int k = 1;
int sol = 0;
int main()
{
	int a, b;
	scanf("%s", num);
	scanf("%d", &b);
	for (int i = 0; i < strlen(num); i++)
	{
		temp += pow((int)(num[i] - '0'), b);
	}
	check = temp;

	temp = -1;

	sprintf(num, "%d", check);

	while (check != temp)
	{
		for (int i = 0; i < strlen(num); i++)
		{
	
		temp += pow((int)(num[i] - '0'), b);
		}
		printf("%d\n", temp);
		sprintf(num, "%d", temp);

		temp = 0;
		sol++;
	}

	printf("%d\n", sol);




}