#include <iostream>

using namespace std;
int arr[20010];
int sum = 0;
int temp = 0;
int check[] = { 1, 10, 100, 1000};
int main()
{
	for (int i = 1; i < 10000; i++)
	{
		sum = i;
		temp = i;
		for (int j = 1000; j >= 10; j=j/10)
		{
			if (i / j != 0)
			{
				sum += temp / j;
				temp = temp%j;
			}
		//	printf("asdf: %d\n", sum);
		}
		sum += i % 10;
		arr[sum] = 1;
		//printf("%d ", sum);
		if (arr[i] == 0)
			printf("%d\n", i);
	}

}