#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int arr[1001][1001];
void BFS();
queue<pair<int, int> > Q;

int visit[1001][1001];
int n, m;
int M = -1;


int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			visit[i][j] = 0;
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1)
			{
				Q.push({ i, j });
			}
		}
	}
	if (Q.size() == n*m)
	{
		printf("0");
		return 0;
	}

	BFS();
	printf("%d", M);
	
}
void BFS()
{
	int dx[] = { -1, 0, 1, 0 };
	int dy[] = { 0, 1, 0, -1 };
	int dix;
	int diy;
	
	while (!Q.empty())
	{
		int x = Q.front().first;
		int y = Q.front().second;

		Q.pop();

	//	visit[x][y] = 1;

		for (int i = 0; i < 4; i++)
		{
			dix = x + dx[i];
			diy = y + dy[i];
			if (dix < 1 || diy <1 || dix>m || diy > n)
				continue;
			if (visit[dix][diy] == 0 && arr[dix][diy] == 0)
			{
				arr[dix][diy] = 1;
				Q.push({ dix, diy });
				visit[dix][diy] = visit[x][y] + 1;
				M = max(M, visit[dix][diy]);

			}
		}
	}

	
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == 0)
			{
				M = -1;
			}
			
		}
	}
	

}