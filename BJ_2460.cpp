#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1000001];
int a, b, sum;
int T;
int sol = 0;
int ans[501];
int in = 0;
int main()
{
	for (int i = 5; i < 501; i++)
	{
		if (i % 5 == 0)
			in++;
		ans[i] = in;
	}
	
	int c;
	scanf("%d", &T);

	a = 1;
	b = 2;
	c = a*b;
	arr[1] = arr[2] = 0;


	for (int i = 3; i <= T; i++)
	{
		arr[i] = arr[i - 1];
		c = (c*i);
		if (c % 10 == 0)
		{
			while (c % 10 == 0)
			{
				arr[i]++;
				c = c / 10;
			}
		}
		else
			c = c % 1000;
	}
	printf("%d", arr[T]);


}