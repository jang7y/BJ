#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> arr;

int main()
{
	int T;
	int temp;
	arr.push_back(1);
	scanf("%d", &T);
	scanf("%d", &temp);
	for (int i = 1; i < T; i++)
	{
		scanf("%d", &temp);
		arr.insert(arr.begin()+arr.size()-temp, i + 1);
	}
	for (int j = 0; j < T; j++)
	{
		printf("%d ", arr[j]);
	}
	
}