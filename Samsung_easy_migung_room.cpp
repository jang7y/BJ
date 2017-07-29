// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int number = 2;
int check = 1;
int x, y;
int main(int argc, char** argv) {

	setbuf(stdout, NULL);

	int TC;
	int test_case;
	


	scanf("%d", &TC);	// cin 사용 가능
	for (test_case = 1; test_case <= TC; test_case++) {
		int a, b;
		scanf("%d %d", &a, &b);	

		arr[0][0] = 1;
		x = 0;
		y = 0;

		for (int i = 0; i < a*a; i++)
		{
			if (check % 2 == 1)
			{
				y = y + 1;
				for (int j = y; j >= 0; j--)
				{

					arr[x][y] = number++;
					x = x + 1;
					y = y - 1;

				}
				check++;
				x = x - 1;
				y = y + 1;
			}
			else if (check % 2 == 0)
			{

				x = x + 1;
				for (int j = x; j >= 0; j--)
				{
					arr[x][y] = number++;
					x = x - 1;
					y = y + 1;
				}
				check++;
				x = x + 1;
				y = y - 1;
			}
		}

		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < a; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}





		// 이 부분에서 정답을 출력하십시오.
		printf("Case #%d\n", test_case);	// cout 사용 가능

	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}