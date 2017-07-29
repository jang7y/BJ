#include <iostream>

using namespace std;

int main()
{
	char input[120];
	int alpha[26];
	int i;
	
	fill_n(alpha, 26, 0);

	scanf("%s", input);

	for (i = 0; input[i] != 0; i++)
	{
		alpha[input[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}
	return 0;
	
}