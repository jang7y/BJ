#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector<int> >arr(501, vector<int>(501, 0));
vector <vector<int> > DP(501, vector<int>(501, 0));

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	DP[1][1] = arr[1][1];
	DP[2][1] = arr[1][1] + arr[2][1];
	DP[2][2] = arr[1][1] + arr[2][2];
	for (int i = 3; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1)
			{
				DP[i][1] = DP[i - 1][1] + arr[i][1];
			}
			if (j == i)
			{
				DP[i][j] = DP[i - 1][j - 1] + arr[i][j];
			}
			else
			{
				DP[i][j] = max(DP[i - 1][j - 1] + arr[i][j], DP[i - 1][j] + arr[i][j]);
			}
		}
	}

	printf("%d", *max_element(DP[num].begin(), DP[num].end()));


}