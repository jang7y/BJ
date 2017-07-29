#include <iostream>
#include <vector>
#include <queue>


void DFS(int);
using namespace std;
int T;
int asso;
queue<int> Q;
int arr[101][101];
bool check[101][101];
vector<int> computer;
int sum = 0;
int main()
{
	int a, b;
	scanf("%d\n%d", &T, &asso);
	computer.assign(T+1, 0);
	for (int i = 0; i < asso; i++)
	{
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	for (int i = 1; i <= T; i++)
	{
		check[i][1] = true;
	}
	Q.push(1);
	DFS(1);
	
	printf("%d", sum-1);
}

void DFS(int num)
{
	if (computer[num] == 1)
		return;
	else
		computer[num] = 1;
	sum++;
	for (int i = 1; i <= T; i++)
	{
		if (arr[num][i] == 1 && computer[i] == 0)
		{
			DFS(i);
		}
	}	
}