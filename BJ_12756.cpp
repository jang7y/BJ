#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int aa, al, ba, bl;

	scanf("%d %d", &aa, &al);
	scanf("%d %d", &ba, &bl);

	while (al > 0 && bl > 0)
	{
		al -= ba;
		bl -= aa;
	}
	printf("%d %d\n", al, bl);

	if (al<=0 && bl>0)
	{
		printf("PLAYER B");
	}
	else if (bl<=0 && al>0)
	{
		printf("PLAYER A");
	}
	else if (al<=0 && bl<=0)
	{
		printf("DRAW");
	}

}