#include <iostream>

using namespace std;

int n, m;
int arr[501][501];
int sol = 0;
int DP[501][501];
void DFS(int, int, int);

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int xx = 1;
int yy = 1;
int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	DP[1][1] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i == 1 && j == 1)
				continue;
			DP[i][j] = DP[i - 1][j] + DP[i][j + 1] + DP[i + 1][j] + DP[i][j - 1];
		}
	}
	/*
	while (xx != n || yy != m)
	{
		
		for (int i = 0; i < 4; i++)
		{
			if (xx + dx[i] < 1 || yy + dy[i] < 1 || xx+dx[i] >n || yy+dy[i]>m)
				continue;
			if (arr[xx][yy]> arr[xx + dx[i]][yy + dy[i]])
			{
				DP[xx + dx[i]][yy + dy[i]] = DP[xx][yy] + 1;
				xx = xx + dx[i];
				yy = yy + dy[i];
			}
		}
	}

	*/
	printf("%d", DP[n][m]);
	


	//DFS(1, 1,arr[1][1]);
	//printf("%d", sol);
}

void DFS(int a, int b,int height)
{
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	if (a < 1 || b<1 || a>n || b>m)
		return;

	if (a == n && b == m)
	{
		sol++;
	}
	

	for (int i = 0; i < 4; i++)
	{
		if (arr[a + dx[i]][b + dy[i]] < height)
		{
			DFS(a + dx[i], b + dy[i], arr[a + dx[i]][b + dy[i]]);
		}
	}
	
}