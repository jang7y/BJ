

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//vector<pair<int, int> > arr;
int arr[51][4];
int T;
int sol = 1;
int dap = 1;
int M1, M2;

int main()
{
	for (int i = 0; i < 51; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = 0;
		}
		arr[i][3] = 1;
	}

	int a, b;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &arr[i][1], &arr[i][2]);
		M1 = max(M1, arr[i][1]);
		M2 = max(M2, arr[i][2]);
	}

//	printf("sdf : %d %d", M1, M2);
	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= T; j++)
		{
			if (arr[j][1] > arr[i][1] && arr[j][2] > arr[i][2])
			{
				arr[i][3]++;
				//dap++;
			}
		
		}
	}
	for (int i = 1; i <= T; i++)
		printf("%d ", arr[i][3]);


	
}
