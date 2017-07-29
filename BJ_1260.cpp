#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int arr[1001][1001];
int visit[1001];
//vector<int> save(1001, 0);
queue<int> Q;

void DFS(int);
void BFS(int);
int n, m, v;
int main()
{
	int a, b;
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		arr[a][b] = arr[b][a] = 1;
	}
	DFS(v);
	printf("\n");
	for (int i = 0; i <= n; i++) visit[i] = 0;
	BFS(v);
	
}

void DFS(int v)
{
	if (visit[v] == 1)
	{
		return;
	}

	visit[v] = 1;
	
	printf("%d ", v);

	for (int i = 1; i <= n; i++)
	{
		if (arr[v][i] == 1 && visit[i] == 0)
		{
			DFS(i);

		}
	}	
}

void BFS(int v)
{
	visit[v] = 1;

	Q.push(v);
	
	while (!Q.empty())
	{
		int num = Q.front();
		Q.pop();

		printf("%d ", num);
		for (int i = 1; i <= n; i++)
		{
			if (arr[num][i] == 1 && visit[i]==0)
			{	
				visit[i] = 1;
				Q.push(i);
			}
		}
	}
	
	
	
	

}