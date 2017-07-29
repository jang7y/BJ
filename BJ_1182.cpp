#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;

int dp[2000010];
int n, s;
int cnt=0;

void DFS(int, int);
int sum = 0;
int sol = 0;
int main()
{
	int temp;
	scanf("%d %d", &n, &s);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);

	}
	DFS(0, 0);
	printf("%d", cnt);
}

void DFS(int a, int b)
{
	if (a >= n)
		return;

	if (b+arr[a] == s)
	{
		cnt++;
	}

	
	DFS(a + 1, b);
	DFS(a + 1, b + arr[a]);
}