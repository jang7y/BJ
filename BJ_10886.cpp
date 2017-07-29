#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
int T;
//int arr[2];
vector<int> arr(3);
int x, y, z;
int main()
{
	arr[2] = 987654321;
	scanf("%d", &T);
	if (T == 2)
		scanf("%d %d", &arr[0], &arr[1]);
	else
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	for (int i = 1; i < *min_element(arr.begin(), arr.end()); i++)
	{
		if (T == 2)
		{
			if (arr[0] % i == 0 && arr[1] % i == 0)
				printf("%d\n", i);
		}
		else
		{
			if (arr[0] % i == 0 && arr[1] % i == 0 && arr[2] % i == 0)
				printf("%d\n", i);
		}
	}
}