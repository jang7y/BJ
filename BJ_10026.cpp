#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

char grid[101][101];

bool visit[101][101];
bool dvisit[101][101];

void dfs(int x, int y, int num);
void ddfs(int x, int y, int num);
int R = 0;
int G = 0;
int B = 0;
int men = 0;
int dmen = 0;

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", grid[i]);
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (visit[i][j] == 0)
			{
				dfs(i, j, num);
				men++;
			}
			
				
		}
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (grid[i][j] == 'G')
				grid[i][j] = 'R';
		}
	}

	
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (dvisit[i][j] == 0)
			{
				ddfs(i, j, num);
				dmen++;
			}


		}
	}


	
	cout << men << " " << dmen;
	

}

void dfs(int x, int y, int num)
{
	if (x < 0 || y < 0 || x >= num || y >= num)
	{
		return;
	}

	if (visit[x][y] == 1)
	{
		return;
	}
	
	visit[x][y] = 1;

	if (grid[x][y] == grid[x][y-1])
		dfs(x, y - 1, num);
	if (grid[x][y] == grid[x - 1][y])
		dfs(x - 1, y, num);
	if (grid[x][y] == grid[x][y+1])
		dfs(x, y + 1, num);
	if (grid[x][y] == grid[x + 1][y])
		dfs(x + 1, y, num);

	return;

}


void ddfs(int x, int y, int num)
{
	if (x < 0 || y < 0 || x >= num || y >= num)
	{
		return;
	}

	if (dvisit[x][y] == 1)
	{
		return;
	}

	dvisit[x][y] = 1;

	if (grid[x][y] == grid[x][y - 1])
		ddfs(x, y - 1, num);
	if (grid[x][y] == grid[x - 1][y])
		ddfs(x - 1, y, num);
	if (grid[x][y] == grid[x][y + 1])
		ddfs(x, y + 1, num);
	if (grid[x][y] == grid[x + 1][y])
		ddfs(x + 1, y, num);

	return;

}
