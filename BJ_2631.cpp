#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;
vector<int> arr;
int T;
int flag = 0;
int cnt = 0;
int DP[205];

int main()
{
	fill_n(DP, 205, 1);
	vector<int>::iterator it;
	scanf("%d", &T);
	arr.resize(T + 1, 0);
	for (int i = 1; i <= T; i++)
	{
		int temp;
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (arr[j] < arr[i])
				DP[i] = max(DP[i], DP[j] + 1);
		}
	}
	printf("%d", T-*max_element(DP, DP + T+1));

	
	
	
}