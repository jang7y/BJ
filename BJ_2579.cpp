#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int T;
vector<int> arr;
int DP[3][303] = { 0, };
int main()
{

	int temp;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}

	for (int i = 2; i < T + 2; i++)
	{
		DP[1][i] = DP[2][i - 2] + arr[i - 2];
		DP[2][i] = max(DP[1][i - 1] + arr[i - 2], DP[2][i - 2] + arr[i - 2]);
	}
	printf("%d", max(DP[1][T + 1], DP[2][T + 1]));


}

