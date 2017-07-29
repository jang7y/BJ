#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	int city, bus, a, b, c;
	scanf("%d %d", &city, &bus);
	vector<int >::iterator it;
	vector<vector<int> >arr(city+1, vector<int>(city+1, 100001));
	vector<vector<int> >arr2(city + 1, vector<int>(city + 1, 100001));
	for (int i = 0; i < bus; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		arr[a][b] = min(c, arr[a][b]);
		
	}
	for (int i = 1; i < city + 1; i++)
	{
		arr[i][i] = 0;
	}

	for (int i = 1; i <= city; i++)
	{
		for (int j = 1; j <= city; j++)
		{
			for (int k = 1; k <= city; k++)
			{
				if (arr[j][k] > arr[j][i] + arr[i][k])
				{
					arr[j][k] = arr[j][i] + arr[i][k];
				}
			}
		}
	}




	for (int i = 1; i <= city; i++)
	{
		for (int j = 1; j <= city; j++)
		{
			if (arr[i][j] == 100001)
			{
				printf("%d ", 0);
			}
			else
				printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}