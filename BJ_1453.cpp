#include <iostream>

using namespace std;

int T;

int stand = 1;
int sum = 0;
int temp; 
int temp2;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &temp);
		temp2 = temp;
		stand = 1;
		for (int i = 10000; i >= 1; i = i / 10)
		{
			if (temp2 / i != 0)
			{
				temp += (temp2 / i) *stand;
				stand *= 10;
				temp2 = temp2%i;
			}

		}
		printf("asdf : %d\n", temp);


	}

}