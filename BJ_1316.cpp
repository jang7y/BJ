/*
#include <iostream>
#include <cstring>

using namespace std;


int T;
int sol = 0;
int temp = 0;
int al[26];
char word[101][101];
char check='A';
int sw = 0;
int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", word[i]);
		for (int j = 0; j < strlen(word[i]); j++)
		{
			if (check != word[i][j])
			{
				if (al[word[i][j] - 'a'] == 1)
				{
					sw = 1;
					continue;

				}
				
				else
				{
					check = word[i][j];
					al[word[i][j] - 'a'] = 1;
				}
			}
		}
		if (sw==0)
			sol++;
		for (int i = 0; i < 26; i++)
		{
			al[i] = 0;
		}
		sw = 0;
	}
	printf("%d", sol);
}

*/

#include <iostream>
#include <cstring>

using namespace std;

int arr[27];
int T;
char cha[105];
int flag = 0;
int temp;

int cnt = 0;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", cha);
		temp = strlen(cha);
		arr[cha[0] - 'a']++;


		for (int i = 1; i < temp; i++)
		{

			if (arr[cha[i]-'a'] != 0 && (cha[i] != cha[i - 1]))
			{
				flag = 1;
				break;
			}
				
			else
				arr[cha[i] - 'a']++;

		}
		if (flag == 0)
		{
			cnt++;
		}
		flag = 0;
		
		/*
		for (int i = 0; i < 105; i++)
		{
			cha[i] = 0;
		}
		for (int i = 0; i < 27; i++)
		{
			arr[i] = 0;
		}
		*/
		fill_n(cha, 105, 0);
		fill_n(arr, 27, 0);

		
	}
	printf("%d", cnt);
}