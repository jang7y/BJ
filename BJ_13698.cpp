#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

vector<int>cup;
char arr[201];

int dx[6] = { 0, 0, 0, 1, 1, 2 };
int dy[6] = { 1, 2, 3, 2, 3, 3 };

vector<int>::iterator it;


int main()
{
	cup.assign(4, 0);
	cup[0] = 1;
	cup[3] = 2;
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{

		swap(cup[dx[arr[i]-65]], cup[dy[arr[i]-65]]);

	}
	for (int i = 0; i < 4; i++)
	{
		if (cup[i] == 1)
		{
			printf("%d\n", i+1);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (cup[i] == 2)
		{
			printf("%d\n", i + 1);
		}
	}

}