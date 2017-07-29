#include <iostream>

using namespace std;


int T;
void div(int);
int main()
{
	scanf("%d", &T);
	div(T);


}
void div(int a)
{
	if (a == 1)
		return;


	for (int i = 2; i<=a; i++)
	{
		if (a%i == 0)
		{
			printf("%d\n", i);
			div(a / i);
			break;
		}
	}
}