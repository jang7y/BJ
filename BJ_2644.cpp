#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int arr[101][101];
int visit[101];


int men;
int a, b;
int first_count = -1;
int second_count = -1;
int num;
int sol = 0;
int check = 0;
queue<int> Q;
void DFS(int);
void BFS(int);

int main()
{


	scanf("%d", &men);
	scanf("%d %d", &a, &b);
	scanf("%d", &num);
	int row, col;


	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &row, &col);
		arr[row][col] = 1;
		arr[col][row] = 1;

	}

	BFS(a);


}

void BFS(int temp)
{
	Q.push(temp);
	visit[temp] = 1;


	while (!Q.empty())
	{
		int num = Q.front();
		Q.pop();
		
		if (num == b)
		{
			printf("%d", visit[num]-1);
			return;
		}
		
		for (int i = 1; i <= men; i++)
		{
			if (arr[num][i] == 1 && visit[i] == 0)
			{

				Q.push(i);
				visit[i] = visit[num] + 1;
			}

		}

	}
	printf("%d", -1);
}

void DFS(int temp)
{
	if (temp == a)
	{
		return;
	}
	sol++;
	visit[temp] = 1;

	for (int i = 1; i <= num; i++)
	{
		if (arr[temp][i] == 1 && visit[temp] == 0)
		{
			DFS(i);

		}
	}
}