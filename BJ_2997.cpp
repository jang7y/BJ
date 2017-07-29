#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int temp;
int small = 98764321;
int main()
{
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < 2; i++)
	{
		small = min(arr[i + 1] - arr[i],small);
	}

	for (int i = 0; i < 2; i++)
	{
		if (arr[i + 1] - arr[i] != small)
		{
			printf("%d", arr[i] + small);
			return 0;
		}
	}
	printf("%d", arr[2] + small);
}