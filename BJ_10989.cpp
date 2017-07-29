#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr(10001);


int main()
{
	int num;
	int t;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &t);
		arr[t]++;
	}
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			printf("%d\n", i);
		}
	}
}