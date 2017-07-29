#include <iostream>

using namespace std;

int T;
int main()
{
	int a, b;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &a ,&b);
		printf("Case #%d: %d\n", i + 1, a + b);

	}
}