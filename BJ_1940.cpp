

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> arr;
int temp;
int T;
int sum;
int sol = 0;
int a, b;
int main()
{
	scanf("%d", &T);
	scanf("%d", &sum);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());

	a = 0;
	b = arr.size() - 1;
	while (a < b)
	{
		if (arr[a] + arr[b] == sum)
		{
			sol++;
			a++;
			b--;
		}
		else if (arr[a] + arr[b] < sum)
			a++;
		else if (arr[a] + arr[b] > sum)
			b--;
	}
	printf("%d", sol);


	/*
	for (int i = 0; i < T - 1; i++)
	{
		for (int j = i + 1; j < T; j++)
		{
			if (arr[i] + arr[j] == sum)
				sol++;
		}
	}
	printf("%d", sol);
	*/
}