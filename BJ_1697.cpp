#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;


int DP[4][100005];

int visit[100005];
int a, b;

void BFS(int);
int main()
{
	
	scanf("%d %d", &a, &b);

	BFS(a);

	printf("%d", visit[b]-1);

}

void BFS(int a)
{
	int temp;
	queue<int> Q;

	Q.push(a);
	visit[a] = 1;


	while (!Q.empty())
	{
		temp = Q.front();
		Q.pop();

		if (temp == b)
			return;

		if (visit[2 * temp] == 0 && 2 * temp <= 100000)
		{
			visit[2 * temp] = visit[temp] + 1;
			Q.push(2 * temp);

		}
		
		if (visit[temp + 1] == 0 && temp + 1 <= 100000)
		{
			visit[temp + 1] = visit[temp] + 1;
			Q.push(temp + 1);
		}

		if (visit[temp - 1] == 0 && temp - 1 >= 0)
		{
			visit[temp - 1] = visit[temp] + 1;
			Q.push(temp - 1);
		}
		
	}

	
}