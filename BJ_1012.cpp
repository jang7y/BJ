#include <iostream>
#include <vector>

using namespace std;

int T;
int Bae[51][51];
int temp1, temp2;
int a, b, c;

int sol = 0;
bool check[51][51];

void DFS(int, int);
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d", &a, &b, &c);
		for (int i = 0; i < c; i++)
		{
			scanf("%d %d", &temp1, &temp2);
			Bae[temp2][temp1] = 1;
		}

		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < a; j++)
			{
				if (check[i][j] == false && Bae[i][j] == 1)
				{
					sol++;
					DFS(i, j);

				}
			}
		}

		printf("%d\n", sol);

		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < a; j++)
			{
				check[i][j] = false;
				Bae[i][j] = 0;
			}
		}
		sol = 0;

	}

}

void DFS(int x, int y)
{
	if (x < 0 || y < 0 || x >= b || y >= a)
		return;


	if (Bae[x][y] == 0 || check[x][y]==true)
		return;


	check[x][y] = true;

	DFS(x - 1, y);
	DFS(x, y + 1);
	DFS(x + 1, y);
	DFS(x, y - 1);

}