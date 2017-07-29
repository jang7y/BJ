#include <iostream>

using namespace std;

int arr[1000001];
int check = 0;
int main()
{

	int a, b;
	arr[1] = 0;
	for (int i = 2; i*i < 1000001; i++)
	{
		if (arr[i] == 0)
		{
			for (int j = i*i; j < 1000001; j = j + i)
				arr[j] = 1;
		}
	}

	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i);
	}

}
