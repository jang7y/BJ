#include <iostream>

using namespace std;

int T;
int arr[10000];
int cnt = 0;
int a, b;
int main()
{
	for (int i = 2; i*i < 10000; i++)
	{
		for (int j = i*i; j < 10000; j=j+i)
		{
			arr[j] = 1;
		}
	}

	scanf("%d", &T);
	while (T--)
	{
		cnt = 0;
		scanf("%d %d", &a, &b);
		if (a == b)
		{
			printf("%d\n", cnt);
			continue;
		}
		for (int i = b-1; i >=a; i--)
		{

			if (arr[i] == 0 && (b-i) % 1000 == 0 )
			{
				printf("sdf: %d\n", i);
	//			a = i;
				cnt++;
				continue;
			}
			else if (arr[i] == 0 && (b - i) % 100 == 0)
			{
				printf("sdf: %d\n", i);

		//		a = i;
				cnt++;
				continue;
			}
			else if (arr[i] == 0 && (b-i) % 10 == 0)
			{
				printf("sdf: %d\n", i);

	//			a = i;
				cnt++;
				continue;
			}
			if (i == a)
			{
				cnt++;
				break;
			}

		}
		printf("%d\n", cnt);
	}
}