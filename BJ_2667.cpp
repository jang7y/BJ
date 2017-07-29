#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int apt[26][26];
int T;

bool check[26][26];
queue<pair<int, int> > q;
void DFS(int, int);
int sol = 1;
vector<int> temp;
void BFS(int, int);

int main()
{
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			scanf("%1d", &apt[i][j]); 
		}
	}


	
	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			if (apt[i][j] == 1 && check[i][j]==false)
			{
				//DFS(i, j);
				BFS(i, j);
				temp.push_back(sol);
				sol = 1;
				

			}
		}
	}
	printf("%d\n", temp.size());	// 단지 갯수

	sort(temp.begin(), temp.end());	// 오름차순으로 소팅

	for (int i = 0; i < temp.size(); i++)	
	{
		printf("%d\n", temp[i]);
	}
}
void BFS(int a, int b)
{
	int x[4] = { -1, 0,1, 0 };
	int y[4] = { 0, 1, 0, -1 };
	pair <int, int> arr;
	q.push({ a, b });
	

	while (!q.empty())
	{
		check[a][b] = true;
		arr = q.front();
		for (int i = 0; i < 4; i++)
		{
			if (apt[arr.first + x[i]][arr.second + y[i]] == 1 && check[arr.first + x[i]][arr.second + y[i]] == false)
			{
				sol++;
				q.push({ arr.first + x[i], arr.second + y[i] });
			}
		}
		
	}
	
	
}
/*
void DFS(int a, int b)
{
	if (a <= 0 || b <= 0 || a >T || b > T)	// 범위 넘어가면 return 
	{
		return;
	}
	if (apt[a][b] == 0 || check[a][b] == true)	// 길 없거나 방문했으면 return
		return;

	sol++;

	check[a][b] = true;

	DFS(a + 1, b);
	DFS(a - 1, b);
	DFS(a, b + 1);
	DFS(a, b - 1);
}

*/