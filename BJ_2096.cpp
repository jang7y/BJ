#include <iostream>
#include <algorithm>

using namespace std;

//int arr[4][100002];
int DP[4][2];

int mDP[4][2];
int main()
{
	int T;
	int a, b, c;

	scanf("%d", &T);

	scanf("%d %d %d", &a, &b, &c);
	DP[0][0] = mDP[0][0] = a;
	DP[1][0] = mDP[1][0] = b;
	DP[2][0] = mDP[2][0] = c;
	for (int i = 2; i <= T; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		DP[0][1] = max(DP[0][0], DP[1][0]) + a;
		DP[1][1] = max(DP[0][0], max(DP[1][0], DP[2][0])) + b;
		DP[2][1] = max(DP[1][0], DP[2][0]) + c;

		mDP[0][1] = min(mDP[0][0], mDP[1][0]) + a;
		mDP[1][1] = min(mDP[0][0], min(mDP[1][0], mDP[2][0])) + b;
		mDP[2][1] = min(mDP[1][0], mDP[2][0]) + c;


		DP[0][0] = DP[0][1];
		DP[1][0] = DP[1][1];
		DP[2][0] = DP[2][1];

		mDP[0][0] = mDP[0][1];
		mDP[1][0] = mDP[1][1];
		mDP[2][0] = mDP[2][1];

	}
	

	if (T == 1)
	{
		printf("%d %d", max(DP[0][0], max(DP[1][0], DP[2][0])), min(mDP[0][0], min(mDP[1][0], mDP[2][0])));
		return 0;
	}
	printf("%d %d", max(DP[0][1], max(DP[1][1], DP[2][1])), min(mDP[0][1], min(mDP[1][1], mDP[2][1])));



}