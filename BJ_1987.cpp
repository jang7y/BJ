#include <iostream>
#include <algorithm>
using namespace std;


char board[25][25];
int a, b;
char temp;
int visit[25][25];

int al[28];
int sol = 1;
int M = -1;

void DFS(int, int);
int main()
{
	for (int i = 1; i < 25; i++)
	{
		for (int j = 1; j < 25; j++)
		{
			visit[i][j] = 0;
		//	board[i][j] = 0;
		}
	}
	scanf("%d %d\n", &a, &b);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			scanf("%c", &board[i][j]);
		}
		scanf("%c", &temp);
	}


	visit[1][1] = 1;
//	al[board[1][1] - 'A'] = 1;
	DFS(1, 1);
	//printf("%d", visit);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			printf("%d ", visit[i][j]);
			M = max(visit[i][j], M);
		}
		printf("\n");
	}
	printf("%d", M);
}

void DFS(int n, int m)
{

	int dx[] = { -1, 0, 1, 0 };
	int dy[] = { 0, 1, 0, -1 };

	if (n<1 || m<1 || n>a || m>b)
	{
	//	M = max(sol, M);
		return;
	}


	if (al[board[n][m] - 'A'] == 1)
	{
		//M = max(sol, M);
		return;
	}
	//visit[n][m] = 1;
	al[board[n][m] - 'A'] = 1;
	
	for (int i = 0; i < 4; i++)
	{
		if ((al[board[n + dx[i]][m + dy[i]]-'A'] == 0) && visit[n + dx[i]][m + dy[i]]==0)
		{		//	sol++;
		//	al[board[n][m] - 'A'] = 1;
			sol++;
			M = max(sol, M);
			visit[n + dx[i]][m + dy[i]] = visit[n][m] + 1;
			DFS(n + dx[i], m + dy[i]);
		
			visit[n][m]--;

		//	al[board[n][m] - 'A']--;
		}
	}
	al[board[n][m] - 'A'] = 0;
	sol--;
}