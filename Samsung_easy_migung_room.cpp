// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
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
	


	scanf("%d", &TC);	// cin ��� ����
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





		// �� �κп��� ������ ����Ͻʽÿ�.
		printf("Case #%d\n", test_case);	// cout ��� ����

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}