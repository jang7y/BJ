#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;

char name[120];

int main()
{
	scanf("%s", name);
	for (int i = 0; i < strlen(name); i++)
	{
		if (name[i] >= 'A'&& name[i]!='-')
		{
			printf("%c", name[i]);
		}
	}

}