#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[101];
//vector<char> arr;
int m, n;
int j = 987654321;
int sum = 0; 
int main()
{
	
	scanf("%d\n%d", &m, &n);
	for (int i = 1; i <= 100; i++)
	{
		if (i*i >= m && i*i <= n)
		{
			j = min(j, i*i);
			sum += i*i;
		}
	}
	if (sum == 0)
	{
		printf("-1");
		return 0;
	}
	printf("%d\n", sum);
	printf("%d", j);
	
}