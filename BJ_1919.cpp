#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

char first[26];
char second[26];

char temp[1001];
char temp2[1001];
int sum = 0;

int main()
{
	scanf("%s", temp);
	scanf("%s", temp2);


	for (int i = 0; i < strlen(temp); i++)
	{
		first[temp[i] - 'a']++;
	}

	for (int i = 0; i < strlen(temp2); i++)
	{
		first[temp2[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++)
	{
		if (first[i] != 0)
		{
			sum = sum + abs(first[i]);
		}
	}
	printf("%d", sum);

}