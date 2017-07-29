#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
int T;
int temp;
int check = 0;
int dis = 0;
int M = -1;
int main()
{
	vector<int>::iterator it;
	int a, b;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	for (int i = 0; i < arr.size()-2; i++)
	{
		if (arr[i] < *max_element(arr.begin() + i+1, arr.end()))
		{
			it = max_element(arr.begin() + i, arr.end());
			dis = distance(arr.begin(), it);
			M = max(dis, M);
		}
	}
	printf("%d", M);
}