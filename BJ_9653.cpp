#include <iostream>
#include <algorithm>


using namespace std;

int sum = 0;
int a, b;
int c, d;

int son, mom;
int GCD(int, int);
int main()
{
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	mom = b*d;
	son = a*d + c*b;


	sum = GCD(son, mom);
	printf("%d %d", son / sum, mom / sum);
}

int GCD(int a, int b)
{
	if (a%b == 0)
		return b;
	else
		GCD(b, a%b);
}
