#include <iostream>
#include <cstring>

using namespace std;
int T;
int a, b;
char first[8];
char second[8];

int sum = 0;
int sum2 = 0;

int main()
{

	scanf("%s %s", first,second);
	printf("%d %d", strlen(first), strlen(second));


;
	for (int i = 0; i < strlen(first) ; i++)
	{
		if (first[i] == '6')
			first[i] = '5';
		sum = sum * 10 + (first[i] - '0');
	}
	for (int i = 0; i < strlen(second) ; i++)
	{
		if (second[i] == '6')
		{
			second[i] = '5';
		}
		sum2 = sum2 * 10 + (second[i] - '0');
	}

	printf("%d ", sum + sum2);
	sum = sum2 = 0;

	for (int i = 0; i < strlen(first) ; i++)
	{
		if (first[i] == '5')
			first[i] = '6';
		sum = sum * 10 + (first[i]-'0');
	}
	for (int i = 0; i < strlen(second); i++)
	{
		if (second[i] == '5')
		{
			second[i] = '6';
		}
		sum2 =sum2*10+ (second[i] - '0');
	}
	

	printf("%d", sum+sum2);

}