#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> arr;
int T;
int main()
{
	int a;
	scanf("%d", &T);
	while (T--)
	{
		for (int i = 0; i < 10; i++)
		{
			scanf("%d", &a);
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
		printf("%d\n", arr[7]);
		arr.clear();
	}
}