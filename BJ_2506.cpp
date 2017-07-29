#include <iostream>

using namespace std;

int arr[101];
int T;
int sum = 0;
int check = 1;
int main()
{
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
		{
			check = 1;
		}
		else
			sum += check++;
	}
	printf("%d", sum);
	
}