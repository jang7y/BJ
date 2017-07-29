#include <iostream>
#include <vector>	
#include <algorithm>
using namespace std;


vector<int> arr;

int T;
int temp;

int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	if (arr.size() % 2 == 0)
	{
		printf("%d", arr[0] * arr[arr.size() - 1]);
	}
	else
		printf("%d", arr[arr.size() / 2] * arr[arr.size() / 2]);
}
