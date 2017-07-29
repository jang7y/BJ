#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

char temp[20];
int check = 0;
int sol = 0;
int stand[26];
int chall[26];


int T;
int main()
{
	scanf("%d", &T);
	scanf("%s", temp);
	for (int i = 0; i < strlen(temp); i++)
	{
		stand[temp[i] - 65]++;
	}
	for (int i = 1; i < T; i++)
	{
		scanf("%s", temp);
		for (int j = 0; j < strlen(temp); j++)
		{
			chall[temp[j] - 65]++;
		}
		for (int j = 0; j < 26; j++)
		{

			chall[j] -= stand[j];
			
		}

		for (int j = 0; j < 26; j++)
		{
			if (chall[j] != 0)
			{
				check += chall[j];
				printf("fsdf : %d\n", chall[j]);
			}
		}
		printf("check : %d\n", check);

		check = 0;
		for (int i = 0; i < 26; i++)
		{
			chall[i] = 0;
		}

	}

	//printf("%d", sol);


}
