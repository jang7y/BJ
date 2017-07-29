#include <iostream>

using namespace std;

int sum = 0;
int temp;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &temp);
		sum += temp;
	}
	printf("%d", sum);
}