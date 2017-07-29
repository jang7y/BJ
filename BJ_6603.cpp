#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>

using namespace std;
vector<int> arr;
deque<int> dq;
vector<int> vec;


void DFS(vector<int> v, int);
bool check[6];

int main()
{
	int a;
	while (1)
	{
		scanf("%d", &a);
		if (a == 0)
		{
			return 0;
		}
		arr.assign(a, 0);

		for (int i = 0; i < a; i++)
		{
			scanf("%d", &arr[i]);
		}
		for (int i = 0; i <= a - 6; i++)
		{
			vec.push_back(arr[i]);
			DFS(arr, i);
			vec.pop_back();
		}
		printf("\n");

		
	}
}
void DFS(vector<int> v, int num)
{
	if (vec.size()==6)
	{
		for (int i = 0; i < 6; i++)
		{
			printf("%d ", vec[i]);
		}
		printf("\n");
		return;
	}
	else
	{
		for (int i = num+1; i < v.size(); i++)
		{
			vec.push_back(v[i]);
			DFS(v, i);
			vec.pop_back();

		}
	}
}