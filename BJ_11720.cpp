#include <iostream>

using namespace std;

int sum = 0;
int T;
int temp;
int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%1d", &temp);
		sum += temp;
	}
	printf("%d", sum);
}