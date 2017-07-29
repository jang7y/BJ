#include <iostream>

using namespace std;

int girl, boy, intern;
int sol = 0;
int main()
{
	scanf("%d %d %d", &girl, &boy, &intern);

	while ((boy-1 >=0) && (girl-2>=0)&& (girl-2 + boy-1) >= intern)
	{
		girl--;
		girl--;
		boy--;
		sol++;
	}
	printf("%d", sol);
}