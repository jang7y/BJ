#include <iostream>

using namespace std;

int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
char arr2[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L' };
int check;
int first = 5;
int second = 9;
int main()
{
	int T;
	scanf("%d", &T);
	if (T > 2013)
	{
		check = T - 2013;
		for (int i = 1; i <= check; i++)
		{
			first++;
			second++;
			if (second > 9)
			{
				second -= 10;
				
			}
			if (first > 11)
			{
				first-= 12;

			}
			
		}
		printf("%c%d", arr2[first], arr[second]);
		
	}
	else
	{
		check = 2013 - T;
		for (int i = 1; i <= check; i++)
		{
			first--;
			second--;
			if (second < 0)
			{
				second += 10;
			}
			if (first< 0)
			{
				first += 12;
			}
		
		}
		printf("%c%d", arr2[first], arr[second]);


	}
}