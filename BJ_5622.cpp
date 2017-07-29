#include <iostream>
#include <cstring>

using namespace std;
char arr[20];
int sum = 0;
int main()
{
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i] <= 'R')
		{
			sum = sum + 3 + ((arr[i]-'A') / 3);
		}
		else if (arr[i] < 'Z')
		{
			sum = sum + 3 + ((arr[i] - 'A'-1) / 3);
		}
		else
		{
			sum += 10;
		}


		
	}
	printf("%d", sum);

}