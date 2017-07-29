#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char arr[9][9];
	char pan[9][9];
	int num = -1;
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			num = num*(-1);
			pan[i][j] = num;
		}
		num = num*(-1);
	}


	for (int i = 0; i < 8; i++)
	{
		scanf("%s", arr[i]);
	}


	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (pan[i][j] == 1 && arr[i][j] == 'F')
			{
				count++;
			}
		}
	}
	printf("%d", count);
	

	
}