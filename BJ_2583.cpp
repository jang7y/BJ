#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int arr[101][101];
int m, n, k;

int cnt = 0;;
int nemo = 0;
int visit[101][101];
vector<int> check;
void DFS(int, int);
int main()
{
	
	int a, b, c,d;
	scanf("%d %d %d", &m, &n, &k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for (int j = b; j < d; j++)
		{
			for (int k = a; k < c; k++)
			{
				arr[j][k] = 1;
			}
		}
	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 0 && visit[i][j] == 0)
			{
				nemo++;
				DFS(i, j);
				check.push_back(cnt);
				cnt = 0;
			}
		}
	}
	printf("%d\n", check.size());
	sort(check.begin(), check.end());

	for (int i = 0; i < check.size(); i++)
	{
		printf("%d ", check[i]);
	}

}

void DFS(int x, int y)
{

	int dx[] = { -1, 0, 1, 0 };
	int dy[] = { 0, 1, 0, -1 };

	if (x < 0 || y < 0 || x >= m || y >= n)
		return;

	if (arr[x][y] == 1)
		return;
	
	visit[x][y] = 1;
	cnt++;
	for (int i = 0; i < 4; i++)
	{
		int ddx = x + dx[i];
		int ddy = y + dy[i];

		if (arr[ddx][ddy] == 0 && visit[ddx][ddy] == 0)
		{
			DFS(ddx, ddy);
		}
	}
}