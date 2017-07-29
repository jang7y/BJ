#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;

int main()
{
	int temp;
	int a = 987654321;
	int b = 987654321;
	int c = 987654321;
	int check;
	scanf("%d", &temp);
	arr.push_back(0);
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(1);
	for (int i = 4; i <= temp; i++)
	{
		int a = 987654321;
		int b = 987654321;
		int c = 987654321;
		if (i % 3 == 0)
		{
			a = arr[i / 3] + 1;
		}
		if (i % 2 == 0)
		{
			b = arr[i / 2] + 1;
		}

		{
			c = arr[i - 1] + 1;
		}
		check = min(a, min(b, c));
		arr.push_back(check);
	}
	printf("%d", arr[temp]);
}