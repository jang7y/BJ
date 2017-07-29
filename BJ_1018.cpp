#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int temp = -1;
char pan[51][51];
int cha[51][51];
int first[9][9];
int second[9][9];
int small = 987654321;
void brute(int, int);

int main()
{
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 8; j++)
		{
			first[i][j] = temp* (-1);	// 1,-1,1,-1 ...로 시작하는 기준 체스판 하나
			second[i][j] = temp;		// -1,1,-1,1 ...로 시작하는 기준 체스판 하나
			temp = temp*(-1);
		}
		temp = temp*(-1);
	}


	scanf("%d %d\n", &n, &m);			// N,M 입력 받음
		
	for (int i = 0; i < n; i++)
	{
		scanf("%s", pan[i]);			// 주어진 체스판 입력 받음
	}


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (pan[i-1][j-1] == 'W')		// W면 1로 설정
				cha[i][j] = 1;
			else
				cha[i][j] = -1;				// B면 -1로 설정
		}
	}



	for (int i = 1; i <= n - 8 + 1; i++)
	{
		for (int j = 1; j <= m - 8 + 1; j++)
		{
			brute(i, j);
		}
	}

	printf("%d", small);			// 가장 최솟값 출력


}


void brute(int a, int b)
{
	int temp = 0;

//	if (cha[a][b] == 1)				// 좌상단이 1로 시작한다면
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (first[i + 1][j + 1] != cha[a + i][b + j])	// 위에서 1로 시작하는 기준 체스판과 비교
				{
					temp++;				// 다를 때마다 1 증가
				}
			}
		}
		small = min(small, temp);		// 최솟값으로 설정
	}
	temp = 0;
//	else                         // 좌상단이 -1로 시작한다면
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (first[i + 1][j + 1] != cha[a + i][b + j])	// 위에서 -1로 시작하는 기준 체스판과 비교
				{
					temp++;		// 다를때마다 1 증가
				}
			}
		}
		small = min(small, temp);		// 최솟값으로 설정
	}

}