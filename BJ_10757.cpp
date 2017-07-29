#include <iostream>
#include <cstring>
#include <vector>




int num1[100003];
int num2[100003];

int sol[1000003];
using namespace std;

vector<int> arr;


int len1, len2;
int main()
{

	int index = 0;
	int temp;

	while (~scanf("%1d", &temp))
	{
		arr.push_back(temp);
		printf("%d ", temp);
	}

	/*
	len1 = strlen(num1);
	len2 = strlen(num2);

	if (len1 >= len2)
	{
		for (int i = len1 - 1; i >= 0; i--)
		{
			if ((num1[i]) + (num2[i]) > 57)
			{
				sol[len1] = num1[i] + num2[i];
				printf("asdf : %d %c \n", sol[len1], sol[len1]);
			}
		}
	}
	*/

}