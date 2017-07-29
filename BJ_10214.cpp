#include <iostream>

using namespace std;

int arr[10][3];
int ksum = 0;
int ysum = 0;
int a, b;
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		for (int i = 1; i < 10; i++)
		{
			scanf("%d %d", &a, &b);
			ysum += a;
			ksum += b;
		}
		if (ysum > ksum)
		{
			printf("Yonsei\n");
		}
		else if (ksum > ysum)
		{
			printf("Korea\n");
		}
		else
		{
			printf("Draw\n");
		}
		ksum = ysum = 0;

		
	}

}