#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;
//int arr[2000001];
int men, T;
int arr[2];
char on[11][11];

int garo=-1;
int sero = -1;

int endgaro = -1;
int endsero = -1;

void sol(int, int);
int main()
{
	scanf("%d %d", &men, &T);
	for (int i = 0; i < men; i++)
	{
		scanf("%s", on[i]);
	}

	for (int i = 0; i < men; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (on[i][j] == 'X')
				sol(i, j);
		}
	}

	for (int i = 0; i < men; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (on[i][j] == 'C')
				on[i][j] = '.';
		}
	}

	for (int i = 0; i < men; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (on[i][j] == 'X')
			{
				garo = i;
				break;

			}
			
		}
		if (garo != -1)
			break;
	}
	for (int i = 0; i < men; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (on[j][i] == 'X')
			{
				sero = j;
				break;
			}
		}
		if (sero != -1)
			break;
	}

	for (int i = 0; i < men; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (on[i][j] == 'X')
			{
				endgaro = max(endgaro, j);
			}
		}
	}

	for (int i = 0; i < men; i++)
	{
		for (int j = 0; j < T; j++)
		{
			if (on[j][i] == 'X')
			{
				endsero = max(endsero, j);
			}
		}
	}

	printf("asdfafds : %d %d %d %d\n", garo, sero, endgaro, endsero);

	for (int i = garo; i <= endsero; i++)
	{
		for (int j = sero-1; j <= endgaro; j++)
		{
			printf("%c", on[i][j]);
		}
		printf("\n");
	}
}

void sol(int a, int b)
{
	int temp = 0;
	int dx[4] = { -1, 0, 1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	for (int i = 0; i < 4; i++)
	{
		if (b + dx[i]<0 || a + dy[i] <0 || b + dx[i] > T-1 || a + dy[i]> men-1)
			temp++;
		if (on[a + dx[i]][b + dy[i]] == '.')
			temp++;
	}
	if (temp >= 3)
		on[a][b] = 'C';
	
}