#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//vector<int> arr;
int coin, money;
int arr[101];
int DP[10011];
int temp;
int check = 0;
int main()
{
	for (int i = 0; i < 10010; i++)
	{
		DP[i] = 987654321;
	}


	scanf("%d %d", &coin, &money);


	for (int i = 0; i < coin; i++)
	{
		scanf("%d", &temp);
		arr[i] = temp;
	//	DP[temp] = 1;
		
	}
	DP[0] = 0;
	sort(arr, arr+coin);

	for (int i = 1; i <= money; i++)
	{
		for (int j = 0; j < coin; j++)
		{
			if (i - arr[j] >= 0 && i-arr[j]<=10010)
			{
				DP[i] = min(DP[i], DP[i - arr[j]]+1);
			}
		}
	}

	if (DP[money]==987654321)
	{
		printf("-1");
		return 0;
	}
	
	printf("%d", DP[money]);
}