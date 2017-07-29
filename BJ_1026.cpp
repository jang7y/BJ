#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;
vector<int> arr1;
vector<int>arr2;
int a, b;
int sum = 0;
vector<int>::iterator it;

int main()
{
	
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &a);
		arr1.push_back(a);
	}

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &a);
		arr2.push_back(a);
	}
	for (int i = 0; i < T; i++)
	{
		it = max_element(arr2.begin(), arr2.end());
		//it = find(arr2.begin(), arr2.end(), a);
		a = *it;
		*it = -1;

		b = *min_element(arr1.begin(), arr1.end());
		it = find(arr1.begin(), arr1.end(), b);
		*it = 987654321;

		sum += a*b;
	}
	printf("%d", sum);
	
}