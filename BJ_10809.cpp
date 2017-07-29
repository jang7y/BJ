#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char arr[102];
	int alpha[26];
	int check = -1;
	int count = 0;
	int i = 0;
	int temp;
	
	fill_n(alpha, 26, -1);

	scanf("%s", arr);
	for ( temp = 0; arr[temp] != 0; temp++);


	for (char i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < temp; j++)
		{
			if (i == arr[j])
			{
				if (alpha[(int)i-97] == -1)
				{
					alpha[count] = j;
				}
			}
		}
		count++;
	
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}

	return 0;
}