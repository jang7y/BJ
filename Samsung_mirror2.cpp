// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;


int check = 0;
int dir = 1;
bool visit[1001][1001];

//1이 왼->오 , 2가 위->아래, 3이 오->왼, 4가 아래->위

int main(int argc, char** argv) {


	setbuf(stdout, NULL);

	int TC;
	int test_case;
	int map;
	char arr[1001][1001];
	int x = 0;
	int y = 0;

	scanf("%d", &TC);	// cin 사용 가능
	for (test_case = 1; test_case <= TC; test_case++) {
		scanf("%d", &map);
		for (int i = 0; i < map; i++)
		{
			scanf("%s", arr[i]);
		}

	



		while (1)
		{
			if (x < 0 || y < 0 || x >= map || y >= map)
			{
				break;
			}
			if (dir == 1)
			{
				if (arr[x][y] == '1')
				{
					if (visit[x][y] == 0)
					{
						check++;
						visit[x][y] = 1;
					}
					x = x - 1;

					dir = 4;

				}
				else if (arr[x][y] == '2')
				{
					if (visit[x][y] == 0)
					{
						check++;
						visit[x][y] = 1;
					}
					x = x + 1;

					dir = 2;

				}
				else if (arr[x][y] == '0')
				{
					y = y + 1;
				}
			}
			else if (dir == 4)
			{
				if (arr[x][y] == '1')
				{
					if (visit[x][y] == 0)
					{
						check++;
						visit[x][y] = 1;
					}
					y = y + 1;
					dir = 1;
	
				}
				else if (arr[x][y] == '2')
				{
					if (visit[x][y] == 0)
					{
						check++;
						visit[x][y] = 1;
					}
					y = y - 1;
					dir = 3;
	
				}
				else if (arr[x][y] == '0')
				{
					x = x - 1;
				}
			}
			else if (dir == 2)
			{
				if (arr[x][y] == '1')
				{
					if (visit[x][y] == 0)
					{
						check++;
						visit[x][y] = 1;
					}
					y = y - 1;
					dir = 3;
	
				}
				else if (arr[x][y] == '2')
				{
					if (visit[x][y] == 0)
					{
						check++;
						visit[x][y] = 1;
					}
					y = y + 1;
					dir = 1;
	
				}
				else if (arr[x][y] == '0')
				{
					x = x + 1;
				}
			}
			else if (dir == 3)
			{
				if (arr[x][y] == '1')
				{
					if (visit[x][y] == 0)
					{
						check++;
						visit[x][y] = 1;
					}
					x = x + 1;
					dir = 2;

				}
				else if (arr[x][y] == '2')
				{
					if (visit[x][y] == 0)
					{
						check++;
						visit[x][y] = 1;
					}
					x = x - 1;
					dir = 4;

				}
				else if (arr[x][y] == '0')
				{
					y = y - 1;
				}
			}


		}


		printf("Case #%d\n", test_case);	// cout 사용 가능
		printf("%d\n", check);
		check = 0;
		dir = 1;
		x = y = 0;
		for (int i = 0; i < map; i++)
		{
			fill_n(arr[i], sizeof(arr[i]), 0);
			fill_n(visit[i], sizeof(visit[i]), 0);
		}

	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}