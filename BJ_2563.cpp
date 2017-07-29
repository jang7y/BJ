#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>


using namespace std;
//vector<pair<int, int> > paper;
int paper[101][101];
int arr[31];
int T;
int sum = 0;
int w, h;
int temp = -1;
int a, b, c, d, e;
int sumb = 0;
int x, y;
int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = a; j < a + 10; j++)
		{
			for (int k = b; k < b + 10; k++)
			{
				paper[j][k] = 1;
			}
		}

	}
	for (int i = 1; i < 101; i++)
	{
		for (int j = 1; j < 101; j++)
		{
			sum += paper[i][j];
		}
	}
	printf("%d\n", sum);



}