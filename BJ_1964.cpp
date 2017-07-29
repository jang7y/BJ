#include <iostream>

using namespace std;

int T;
int a = 5;
int sum = 0;
int main()
{
	sum = 5;
	scanf("%d", &T);
	for (int i = 1; i < T; i++)
	{
		sum = sum + 4 + (i * 3);
	}


	printf("%d", sum);
}