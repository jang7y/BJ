#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int T;

int A[3];
int B[3];
int d1;
int d2;
int d3;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		
			scanf("%d %d %d", &A[0], &A[1], &A[2]);
			scanf("%d %d %d", &B[0], &B[1], &B[2]);

			d1 = (A[0] - B[0]) * (A[0] - B[0]) + (A[1] - B[1])* (A[1] - B[1]);
			d2 = (A[2] - B[2]) * (A[2] - B[2]);
			d3 = (A[2] + B[2])* (A[2] + B[2]);

			if (A[0] == B[0] && A[1] == B[1] && A[2] == B[2])	// ���� ���� ��
			{
				printf("-1\n");
			}
			else if (d1 == d2)	// �� ���� �ٸ� ���� ������ ��
			{
				printf("1\n");
			}
			else if (d1 < d2) // �� ���� �ٸ� ���� ���ο��� ������ ���� ��
			{
				printf("0\n");
			}
			else if (A[0] == B[0] && A[1] == B[1] && A[2] != B[2]) // ���� �߽��� ����, �������� �ٸ� ��
			{
				printf("0\n");
			}
			else if (d1 == d3)	// ���� �ٸ� ���� ������ ��
			{
				printf("1\n");
			}
			else if (d1 <d3)	// ���� �ٸ� �� ���� ������ ��
			{
				printf("2\n");
			}
			else if (d1 > d3)	// ���� �ٸ� �� ���� �ۿ��� ������ ���� ��
			{
				printf("0\n");
			}
		

		
	}
}