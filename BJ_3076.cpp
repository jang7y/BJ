#include <iostream>

using namespace std;

int r, c, a, b;

char arr[101][101];
int check = 1;

int main()
{
 	scanf("%d %d %d %d", &r, &c, &a, &b);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= c*b; j++)
		{

			if (check == 1)
				arr[i][j] = 'X';
			else if (check == -1)
				arr[i][j] = '.';
			if (j % b == 0)
				check = check*(-1);

		}
		check = 1;
	}

	
	for (int i = 1; i <= r; i++)
	{
		for (int k = 1; k <= a; k++)
		{
			for (int j = 1; j <= c*b; j++)
			{
				if (i % 2 != 0)
				{
					printf("%c", arr[k][j]);
				}
				else
				{
					if (arr[k][j] == 'X')
						printf("%c", '.');
					else
						printf("%c",'X');
				}
			}
			printf("\n");
		}
		
	}
	

}