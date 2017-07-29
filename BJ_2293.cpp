#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int T;
int temp;
vector<int> arr;
int DP[10001];
int money;
int sol = 0;
int main()
{
	scanf("%d %d", &T, &money);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());

	DP[0] = 1;

	for (int i = 0; i < arr.size() ; i++)
	{
		for (int j = arr[i]; j <= money; j++)
		{
			DP[j] += DP[j-arr[i]];
		}
	}
	printf("%d", DP[money]);
	
}
