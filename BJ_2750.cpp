#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int T;
int main()
{
	scanf("%d", &T);
	for (int i = 0; i < 2*T-1; i++)
	{
		for (int j = i+1; j < T; j++)
			printf(" ");

		if (i < T)
		{
			for (int j = 0; j < 2 * i + 1; j++)
				printf("*");
		}
		else
		{
			for (int j = T; j <= i; j++)
				printf(" ");

			for (int j = 1; j <=((2*T-1)-i)*2-1; j++)
				printf("*");
		}
		printf("\n");



	}

	/*
	for (int i = 0; i < T-1; i++)
	{
		for (int j = i; j <= i; j++)
			printf(" ");

		for (int j = T; j > 2 * i + 1; j--)
	}
	*/
}