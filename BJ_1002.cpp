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

			if (A[0] == B[0] && A[1] == B[1] && A[2] == B[2])	// 같은 원일 때
			{
				printf("-1\n");
			}
			else if (d1 == d2)	// 한 원이 다른 원에 내접할 때
			{
				printf("1\n");
			}
			else if (d1 < d2) // 한 원이 다른 원의 내부에서 접하지 않을 때
			{
				printf("0\n");
			}
			else if (A[0] == B[0] && A[1] == B[1] && A[2] != B[2]) // 원의 중심이 같고, 반지름이 다를 때
			{
				printf("0\n");
			}
			else if (d1 == d3)	// 서로 다른 원이 외접할 때
			{
				printf("1\n");
			}
			else if (d1 <d3)	// 서로 다른 두 원이 교차할 때
			{
				printf("2\n");
			}
			else if (d1 > d3)	// 서로 다른 두 원이 밖에서 떨어져 있을 때
			{
				printf("0\n");
			}
		

		
	}
}