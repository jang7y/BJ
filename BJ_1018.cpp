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
			first[i][j] = temp* (-1);	// 1,-1,1,-1 ...�� �����ϴ� ���� ü���� �ϳ�
			second[i][j] = temp;		// -1,1,-1,1 ...�� �����ϴ� ���� ü���� �ϳ�
			temp = temp*(-1);
		}
		temp = temp*(-1);
	}


	scanf("%d %d\n", &n, &m);			// N,M �Է� ����
		
	for (int i = 0; i < n; i++)
	{
		scanf("%s", pan[i]);			// �־��� ü���� �Է� ����
	}


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (pan[i-1][j-1] == 'W')		// W�� 1�� ����
				cha[i][j] = 1;
			else
				cha[i][j] = -1;				// B�� -1�� ����
		}
	}



	for (int i = 1; i <= n - 8 + 1; i++)
	{
		for (int j = 1; j <= m - 8 + 1; j++)
		{
			brute(i, j);
		}
	}

	printf("%d", small);			// ���� �ּڰ� ���


}


void brute(int a, int b)
{
	int temp = 0;

//	if (cha[a][b] == 1)				// �»���� 1�� �����Ѵٸ�
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (first[i + 1][j + 1] != cha[a + i][b + j])	// ������ 1�� �����ϴ� ���� ü���ǰ� ��
				{
					temp++;				// �ٸ� ������ 1 ����
				}
			}
		}
		small = min(small, temp);		// �ּڰ����� ����
	}
	temp = 0;
//	else                         // �»���� -1�� �����Ѵٸ�
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (first[i + 1][j + 1] != cha[a + i][b + j])	// ������ -1�� �����ϴ� ���� ü���ǰ� ��
				{
					temp++;		// �ٸ������� 1 ����
				}
			}
		}
		small = min(small, temp);		// �ּڰ����� ����
	}

}