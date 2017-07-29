#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;


int arr[27];
char word[1000010];
int m = -1;
int check = 0;
int flag = 0;
int fast;
int main()
{
	scanf("%s", word);
	fast = strlen(word);
	for (int i = 0; i < fast; i++)
	{
		if (word[i] <= 'Z')
		{
			arr[word[i] - 'A']++;
		}
		else
			arr[word[i] - 'a']++;

	}
	for (int i = 0; i < 27; i++)
	{
		if (arr[i] > m)
		{
			m = arr[i];
			flag = i;
		}
		
	}
	if ((count(arr, arr + 27, m)-1))
	{
		printf("?");
		return 0;
	}
	else
		printf("%c", flag + 'A');


}