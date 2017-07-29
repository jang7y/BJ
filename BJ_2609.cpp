#include <iostream>
#include <algorithm>

using namespace std;

int a, b;

int GCD(int, int);
int main()
{
	scanf("%d %d", &a, &b);
	GCD(a, b);

}

int GCD(int a, int b)
{
	int temp;
	int num1, num2;
	num1 = a;
	num2 = b;
	int R = -1;
	int sol = 0;
	while (R != 0)
	{
		R = max(num1, num2) % min(num1, num2);
		sol = min(num1, num2);
		num1 = min(num1, num2);
		num2 = R;
	}
	printf("%d\n", sol);
	printf("%d", sol*(a / sol)*(b / sol));


	return 0;
	


}