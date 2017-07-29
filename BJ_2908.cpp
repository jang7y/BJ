#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1001][1001];
int visit[1001];
vector <int> asdf(3)
vector<int> save[1000];

void DFS(int, int, int);
int main()
{
	int n, m, v;
	int a, b;
	scanf("%d %d %d", &n,&m, &v);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		arr[a - 1][b - 1] = 1;
		arr[b - 1][a - 1] = 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (arr[i][j] == 1 && visit[i] == 0)
		{
			save.push_
		}
	}


}

void DFS(int a, int b, int num)
{

}