#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;
int T;
int arr[101][101];

int visit[101][101];
int sol[101][101];
queue<int >  Q;

stack<int> ST;
void BFS(int);

void DFS(int);
int main()
{
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			scanf("%d", &arr[i][j]);
			{
				//if (arr[i][j] == 1)
					//Q.push({ i, j });
			}

			
		}
	}
	for (int k = 1; k <= T; k++)
	{
		for (int i = 1; i <= T; i++)
		{
			for (int j = 1; j <= T; j++)
			{
				if (arr[i][k] == 1 && arr[k][j] == 1)
					arr[i][j] = 1;
			}
		}
	}


	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}

void BFS(int a)
{
	
	Q.push(a);

	while (!Q.empty())
	{
		int num = Q.front();
		Q.pop();

		for (int i = 1; i <= T; i++)
		{
			if (arr[num][i] == 1 && visit[num][i]==0)
			{
				Q.push(i);
				visit[a][i] = 1;
				printf("ÁÂÇ¥ : %d  %d\n", num, i);
			}
		}
		
	}


}