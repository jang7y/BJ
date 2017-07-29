#include <iostream>
#include <vector>
#include <string>


#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
#define IV 4
#define IX 9
#define XL 40
#define XC 90
#define CD 400
#define CM 900

char Rome[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M' };
int Roma[] = { 1, 5, 10, 50, 100, 500, 1000 };

using namespace std;


int check(char*);
void Prome(int);

int sum = 0;
char first[10];
char second[10];
int a, b;
int main()
{

	scanf("%s", first);
	scanf("%s", second);
	a = check(first);
	
	sum = 0;
	b = check(second);
	
	printf("%d\n", a+b);

	Prome(a + b);
	
	return 0;
	
	
}

void Prome(int a)
{

	char sol[30];
	int j = 0;
	while (a != 0)
	{
		for (int i = 6; i >= 0; i--)
		{
			if (a / Roma[i] != 0)
			{
				a = a - Roma[i];
				sol[j] = Rome[i];
				j++;
				break;
			}
			else if (i % 2 != 0 && ((a / (Roma[i] - Roma[i-1])) != 0) )
			{
				a = a - (Roma[i] - Roma[i-1]);
				sol[j] = Rome[i-1];
				j++;
				sol[j] = Rome[i];
				j++;
				break;
			}
			else if (i % 2 == 0 && ((a / (Roma[i] - Roma[i-2])) != 0) )
			{ 
				a = a - (Roma[i] - Roma[i-2]);
				sol[j] = Rome[i-2];
				j++;
				sol[j] = Rome[i];
				j++;
				break;
			}
		}
	}
	for (int i = 0; i < j; i++)
	{
		printf("%c", sol[i]);
	}
}

int check(char* a)
{
	int temp = 100;
	for (int i = 0; i < strlen(a); i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (a[i] == Rome[j])
			{
				if (temp < j)
				{
					sum = sum - 2 * Roma[temp] + Roma[j];
					break;
				}
				sum += Roma[j];
				temp = j;
			}
			
		}

	}
	return sum;
}