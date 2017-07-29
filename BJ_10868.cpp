#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;

int a, b;
int x, y;
int main()
{
	scanf("%d %d", &a, &b);
	arr.resize(a + 1, 0);
	for (int i = 1; i <= a; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i <= b; i++)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", *min_element(arr.begin() + x , arr.begin() + y+1));
	}
}