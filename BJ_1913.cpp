#include <iostream>

using namespace std;
int arr[1000][1000];

int T, num;
int x, y;
int sw = 0;
int check = 1;
int main()
{
	scanf("%d %d", &T, &num);
	x =y= (T + 1) / 2;
	arr[x][y] = 1;
	x = x - 1;
	for (int i = 2; i <= T*T; i++)
	{
		if (sw == 0)
		{
			y = y + 1;
			if ()
			arr[x][y] = i;
			
		}
	}
}