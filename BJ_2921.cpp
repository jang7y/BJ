#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;
int sum = 0;
int main()
{
	scanf("%d", &T);
	for (int i = 0; i <= T; i++)
	{
		for (int j = i; j <= T; j++)
		{
			sum += i + j;
		}
	}
	printf("%d", sum);

}