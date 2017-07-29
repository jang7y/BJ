#include <iostream>
#include <algorithm>
using namespace std;


int T;
int sum = 0;
int a = 987654321;
int reminder = 1;
int b = 0;
int c = 987654321;
int d = 0;

int main()
{

	scanf("%d", &T);

	reminder = T;
	
	if (T == 4 || T == 7)
	{
		printf("-1");
		return 0; 
	}

	if (T % 5 == 0)
	{
		c = T / 5;
	}

	if (T % 3 == 0)
	{
		a = T / 3;
	}


	while (reminder>2)
	{
		
		reminder = reminder - 5;
		b++;

		if (reminder % 3 == 0)
		{
			d = reminder / 3;
			reminder = 0;
			break;
		}
	}
	if (reminder != 0)
	{
		printf("%d", min(a, c));
	}
	else
	{
		printf("%d", min(a, min(c, b + d)));
	}
		



	
	
}