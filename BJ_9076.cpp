#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
int T;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		arr.resize(5, 0);

		for (int i = 0; i < 5; i++)
		{
			scanf("%d", &arr[i]);
		}
		sort(arr.begin(), arr.end());
		arr.erase(arr.begin());
		arr.erase(arr.end() - 1);
		if (arr[2] - arr[0] >= 4)
		{
			printf("KIN\n");

		}
		else
			printf("%d\n", arr[0] + arr[1] + arr[2]);
	}
}