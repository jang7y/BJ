#include <iostream>
#include <cstring>

using namespace std;


int arr[1041];
int sum = 0;
char temp[21];
int main()
{
	arr[1] = 1;
	for (int i = 2; i < 1041; i++)
	{
		if (arr[i] != 2)
		{
			arr[i] = 1;
			for (int j = i+i; j < 1041;j=j+i)
			{
				arr[j] = 2;
			}
		}
		
	}
	scanf("%s", temp);
	for (int i = 0; i < strlen(temp); i++)
	{
		if (temp[i] >= 'a')
			sum += temp[i] - 'a' + 1;
		else
			sum += temp[i] -'A'+27;
	}

	if (arr[sum] == 1)
		printf("It is a prime word.");
	else
		printf("It is not a prime word.");



}