#include <iostream>

using namespace std;


int T;
long long arr[10000003];
int sw = -1;
int k = 1;
int in = 1;
int x, y;
int main()
{
	scanf("%d", &T);
	int i;
	for (i = 2; i < 10000003; i++)
	{	
		sw = sw*(-1);
		arr[i] = in;
		if (T < arr[i])
			break;
		in += k++;
	}
//	sw = sw*(-1);

	if (sw == -1)
	{
		x = i - 1;
		y = 0;
		for (int j = arr[i - 1]; j <= T; j++)
		{
			x--;
			y++;

		}
	}

	else
	{
		x = 0;
		y = i - 1;
		for (int j = arr[i - 1]; j <= T; j++)
		{
			x++;
			y--;
		}
	}
	printf("%d/%d", x, y);

}