#include <iostream>

using namespace std;

long long T;
long long sol = 0;
unsigned long long temp;
int main()
{
	scanf("%d", &T);
	for (long long  i = 1;; i++)
	{
		T -= i;
		sol++;
		if (T <0)
		{
			sol--;
			break;
		}
	}
	printf("%ld", sol);
}