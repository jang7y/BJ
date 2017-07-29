#include <iostream>
#include <string>

using namespace std;

char num[10];

int main()
{
	int a;
	int sum = 0;
	scanf("%s", num);
	scanf("%d", &a);
	
	num[strlen(num) - 2] = '0';
	num[strlen(num) - 1] = '0';

	for (int i = strlen(num); i >= 0; i--)
	{
		sum = sum + 10 * num[i] - '48';
	}
	printf("asdf : %d\n", sum);
	
	
	
}