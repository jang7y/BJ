#include <iostream>

using namespace std;
int count = 0;
int arr[12];

int main()
{
	int test;
	int num;
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 4;
	scanf("%d", &test);
	while (test--)
	{
		scanf("%d", &num);

		for (int i = 3; i <= num; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
		}
		printf("%d\n", arr[num - 1]);
	}
	


}

