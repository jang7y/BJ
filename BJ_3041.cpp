#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<pair<int, int> >arr(26);
char sample[5][5];
int temp = 65;
int sum = 0;
int k = 0;
char problem[5][5];
int main()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[k++] = { i, j };
		}
	}
//	sample[3][3] = '.';
//	printf("aaaaaaaaa : %d\n", 'P');
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			k = getchar();
			if (k == '.')
				k = 'P';
			printf("fff : %d %d\n", arr[k - 65].first, arr[k - 65].second);
			printf("aaa : %d %d\n", i, j);
			sum += abs(arr[k - 65].first - i) + abs(arr[k - 65].second - j);
			printf("%d ", sum);
		}
		getchar();
		//scanf("\n");
	}

	printf("%d", sum);

}