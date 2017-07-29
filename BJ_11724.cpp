#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check[1000][1000];
int sol = 0;
//bool check[1000];
vector <int> lol;

vector <vector<int> >arr(1000, vector<int>(1000, 0));

void BFS(int,int,int);



int main()
{
	int a, b;
	int row, col;
	scanf("%d %d", &a, &b);
	vector<int>::iterator it;
	lol.assign(a, 0);
	for (int i = 0; i < b; i++)
	{
		scanf("%d %d", &row, &col);
		if (lol[row - 1] == 0 || lol[col - 1] == 0)
		{
			lol[row - 1]++;
			lol[col - 1]++;
		}

		arr[row-1][col-1] = 1;
		arr[col - 1][row - 1] = 1;
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (arr[i][j] == 1 && check[i][j]==0)
			{
				BFS(i, j,a);
				sol++;
			}
		}
	}
	sort(lol.begin(), lol.end());
	
	int temp = 0;

	for (int i = 0; i < a; i++)
	{
		if (lol[i] == 0)
		{
			temp++;
		}
	}
	
	sol += temp;


	printf("%d", sol);
	lol.clear();
	for (int i = 0; i < a; i++)
	{
		arr[i].clear();
	}
	sol = 0;
}

void BFS(int a, int b, int num)
{
	if (a < 0 || b < 0 || a >= num || b >= num)
	{
		return;
	}
	if (check[a][b] == 1)
	{
		return;
	}
	check[a][b] = 1;
	arr[a][b] = arr[b][a] = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[b][i] == 1)
		{
			BFS(b, i, num);
		}
	}
}

