#include <iostream>
#include <cstring>

using namespace std;

char arr[1001];
string st;
int T;
int main()
{
	int temp;
	scanf("%d", &T);
	while (T--)
	{
		//scanf("%s", arr);
		cin >> st;
		temp = strlen(arr);
		printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
	}
}