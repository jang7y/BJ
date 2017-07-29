#include <iostream>
#include <algorithm>

using namespace std;

int arr[] = { 300, 60, 10 };
int T;
int sol[4];
int main()
{

	scanf("%d", &T);
	for (int i = 0; i < 3; i++)
	{
		sol[i] = T / arr[i];
		T %= arr[i];
	}
	if (T != 0)
		printf("-1");
	else
		printf("%d %d %d", sol[0], sol[1], sol[2]);

	
}