#include <iostream>
#include <cstring>

using namespace std;

char arr[105];
int a, b;
int T;
int cnt = 0;
int main()
{
	scanf("%s", arr);
	T = strlen(arr);
	for (int i = 0; i < T; i++)
	{
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			cnt++;
	}
	printf("%d", cnt);
}