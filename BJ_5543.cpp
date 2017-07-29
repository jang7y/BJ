#include <iostream>
#include <algorithm>

using namespace std;
int m = 987654321;
int main()
{
	int buger[3];
	int bev[2];
	scanf("%d %d %d", &buger[0], &buger[1], &buger[2]);
	scanf("%d %d", &bev[0], &bev[1]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			m = min(m, buger[i] + bev[j] - 50);
		}
	}
	printf("%d", m);

}