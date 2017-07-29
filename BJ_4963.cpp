#include <iostream>
#include <queue>

using namespace std;

int arr[51][51];
int visit[51][51];
int w, h;

void DFS(int , int);
int sol = 0;

int main()
{
	while (1)
	{
		for (int i = 1; i < 51; i++)
		{
			for (int j = 1; j < 51; j++)
			{
				arr[i][j] = 0;
				visit[i][j] = 0;
			}
		}

		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0)
			return 0;

		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (arr[i][j] == 1 && visit[i][j] == 0)
				{
					sol++;

					DFS(i, j);
				}
			}
		}

		printf("%d\n", sol);
		sol = 0;


	}
}

void DFS(int a, int b)
{
	int dx[] = { -1, 0, 1, 0, -1,1 ,1,-1};
	int dy[] = { 0, 1, 0, -1 , 1,1 ,-1,-1};
	if (a<1 || b<1 || a>h || b>w)
	{
		return;
	}

	if (arr[a][b] == 0 || visit[a][b] == 1)
		return;

	visit[a][b] = 1;

	for (int i = 0; i < 8; i++)
	{
		DFS(a + dx[i], b + dy[i]);
	}
}