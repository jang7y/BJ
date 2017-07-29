#include <iostream>
#include <cstring>
#include <algorithm>
#include <stdlib.h>

using namespace std;

char first[5];
char second[5];
char sol[100];
int T;
int a;
char temp;
int main()
{
	scanf("%s", first);
	scanf("%s", second);
	for (int i = 0; i < strlen(first)/2; i++)
	{
		swap(first[i], first[strlen(first) - i-1]);
	}
	
	for (int i = 0; i < strlen(second) / 2; i++)
	{
		swap(second[i], second[strlen(second) - i - 1]);
	}
	T = atoi(first) + atoi(second);
	sprintf(sol, "%d",T);
	
	
	for (int i = 0; i < strlen(sol) / 2; i++)
	{
		swap(sol[i], sol[strlen(sol) - i - 1]);
	}

	printf("%d", atoi(sol));
	
}