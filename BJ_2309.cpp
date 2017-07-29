#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr;

int main()
{
	int sum = 0;
	int a, b;
	for (int i = 0; i < 9; i++)
	{
		int num;
		scanf("%d", &num);
		sum += num;
		arr.push_back(num);	
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			a = arr[i] + arr[j];
			if (a == sum - 100)
			{
				arr[i] = 101;
				arr[j] = 101;
				sort(arr.begin(), arr.end());
				for (int k = 0; k < 7; k++)
				{
					printf("%d\n", arr[k]);
				}
				return 0;
			}
		}
	}

	



	

}