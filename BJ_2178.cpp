#include <iostream>
#include <algorithm>
#include <queue>


using namespace std;
void DFS(int, int);
int sol = 1;
int n, m;
int Min = 987654321;
int visit[101][101];
void BFS(int, int);

int miro[101][101];

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			scanf("%1d", &miro[i][j]);
	}

	BFS(1, 1);

	printf("%d", visit[n][m]);
}

void BFS(int a, int b)
{
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	int x, y;

	queue<pair<int, int > > Q;
	Q.push({ a, b });
	visit[a][b] = 1;
	
	while (!Q.empty())
	{
		x = Q.front().first;
		y = Q.front().second;
		Q.pop();


		for (int i = 0; i < 4; i++)
		{
			if (x + dx[i] < 1 || y + dy[i]<1 || x + dx[i]>n || y + dy[i]>m)
				continue;

			if (x + dx[i] == n && y + dy[i] == m)
			{
				visit[x + dx[i]][y + dy[i]] = visit[x][y] + 1;
				sol++;
				return;
			}

			if (miro[x + dx[i]][y + dy[i]] == 1 && visit[x + dx[i]][y + dy[i]] == 0)
			{	
				sol++;
				Q.push({ x + dx[i], y + dy[i] });
				visit[x + dx[i]][y + dy[i]] = visit[x][y]+1;
			}
		}
		
	}
}
