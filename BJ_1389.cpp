#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N, M;
int arr[101][101];
int visit[101];

vector<int> sol(101);

int INF = 987654321;
void BFS(int a);

int main()
{
	vector<int>::iterator it;
	scanf("%d%d", &N, &M);
	int a, b;
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	for (int i = 1; i<=N; i++)
	{
		fill_n(visit, sizeof(visit) / 4, 0);
		BFS(i);	
	}

	it = min_element(sol.begin()+1, sol.begin()+N+1);


	int k;

	k = distance(sol.begin(), it);
	printf("%d", k);


}

void BFS(int a)
{

	queue<int> Q;
	Q.push(a);
	visit[a] = 1;

	while (!Q.empty())
	{
		int num = Q.front();
		Q.pop();
		for (int i = 1; i <= N; i++)
		{
			if (arr[num][i] == 1 && visit[i] == 0)
			{
				Q.push(i);
				visit[i] = visit[num] + 1;
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		sol[a] += (visit[i] - 1);
	}
}