#include <iostream>
#include <cmath>
using namespace std;

int T;
int a, b;
int sum = 0;
int arr[] = { 1, 1, 2, 2, 2, 8 };
int main()
{
	int a;
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &a);
		printf("%d ", (arr[i]-a));
	}
}