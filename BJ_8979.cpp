#include <iostream>

using namespace std;

int n, k;

int soonse;
int sol[1001][4];
int temp[1001][4];
int M = -1;
int gold, sil, bron;

int C = 0;

int main()
{
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &soonse);
		scanf("%d %d %d", &temp[soonse][1], &temp[soonse][2], &temp[soonse][3]);
		if (soonse == k)
		{
			gold = temp[soonse][1];
			sil = temp[soonse][2];
			bron = temp[soonse][3];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (temp[i][1] > gold)
			C++;
		else if (temp[i][1] == gold && temp[i][2] > sil)
			C++;
		else if (temp[i][1] == gold && temp[i][2] == sil && temp[i][3] > bron)
			C++;
	}
	printf("%d", C+1);
}