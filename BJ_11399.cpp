#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr;
int T;
int sum = 0;

int main()
{
	int temp;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < T; i++)
	{
		sum += arr[i] * (T - i);
	}
	printf("%d", sum);

}