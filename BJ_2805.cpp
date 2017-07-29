#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr;
int tree, meters;
int temp;
int M, m;
int sum = 0;
int main()
{
	scanf("%d %d", &tree, &meters);
	while (tree--)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());

	M = arr[arr.size()-1];
	m = arr[0];
	
	for (int i = M; i >= m; i--)
	{
		for (int j = 0; j < arr.size(); j++)
		{
			if (arr[j] - i >= 0)
				sum += arr[j] % i;
		}
		if (sum >= meters)
		{
			printf("%d", i);
			return 0;
		}
		sum = 0;
	}
	
	
}