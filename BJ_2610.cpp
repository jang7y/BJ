#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector< vector<int> >arr;
int T;
int a;
vector<bool> check;
int sol = 0;
void BFS(int );
queue<int> Q;
vector<int> visit;
int main()
{
	int temp, temp2;
	scanf("%d", &T);
	check.assign(T, 0);
	visit.assign(T, 0);
	scanf("%d", &a);
	for (int i = 0; i < T; i++)
	{
		vector<int> el;
		el.assign(T, 0);
		arr.push_back(el);
	}
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &temp, &temp2);
		arr[temp][temp2] = 1;
		arr[temp2][temp] = 1;
	}

	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (visit[i] == false && arr[i][j]==1)
			{
				printf("¾î¹ö : %d %d \n", i, j);
				sol++;
				Q.push(i);
				BFS(i);
			}
		}
	}
	printf("%d\n", sol);

}

void BFS(int num)
{
	int temp;

	if (visit[num] != 0)
	{
		return;
	}
	visit[num] = 1;



	while (Q.empty())
	{
		temp = Q.front();
		Q.pop();

		for (int i = 0; i < T; i++)
		{
			if (arr[temp][i] == 1 && visit[i] == 0)
			{
				printf("asdf : %d\n", i);
				visit[i] = 1;
				Q.push(i);
			}
		}
	}
	return;

}