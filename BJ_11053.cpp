#include <iostream>
#include <algorithm>
using namespace std;

int T;
int arr[1001];
int DP[1001];

int main()
{
	int check = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &arr[i]);
		DP[i] = 1;
	}
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				DP[i] = max(DP[i],DP[j] + 1);
			}
		}
	}
	printf("%d", *max_element(DP,DP+T));
	
	
}