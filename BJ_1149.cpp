#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num;

	scanf("%d", &num);

	vector< vector<unsigned long long> >arr(num, vector<unsigned long long>(3, 0));

	for (int i = 0; i < num; i++)
	{
		scanf("%u %u %u", &arr[i][0], &arr[i][1], &arr[i][2]);
	}

	for (int i = 1; i < num; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + arr[i][0];
			}
			else if (j == 2)
			{
				arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + arr[i][2];
			}
			else
			{
				arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + arr[i][1];
			}
		}
	}

	printf("%u", *min_element(arr[num-1].begin(), arr[num-1].end()));

}