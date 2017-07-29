#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	int num;
	scanf("%d", &num);
	vector<pair<int, int> > arr(num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &arr[i].second, &arr[i].first);
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < num; i++)
	{
		printf("%d %d\n", arr[i].second, arr[i].first);
	}

}