#include <iostream>

using namespace std;

int n, k;
int we = 1;

int main()
{
	scanf("%d %d", &n, &k);
	we = n;

	for (int i = 1; i < k; i++)
	{
		we = we*(n - i)/(i+1);
	}
	printf("%d", we);

}