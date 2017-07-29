#include <iostream>
#include <cstring>


using namespace std;

char arr[1003];
char doctor[1003];
int len;
int a = 0;
int b = 0;

int main()
{
	scanf("%s", arr);
	scanf("%s", doctor);

	len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == 'a')
			a++;
	}
	
	len = strlen(doctor);
	for (int i = 0; i < len; i++)
	{
		if (doctor[i] == 'a')
			b++;
	}

	if (a >= b)
	{
		printf("go");
	}
	else
		printf("no");
}