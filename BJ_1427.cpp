#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

char num[13];

int main()
{
	unsigned long long sol = 0;
	fgets(num, sizeof(num) - 1, stdin);
	sort(num, num + strlen(num) - 1);
	

	for (int i=strlen(num)-2; i>=0; i--)
	{
		sol += num[i]-48;
		sol *= 10;
	}
	printf("%u", sol/10);
	
}