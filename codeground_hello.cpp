/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <cstring>

using namespace std;

int Answer;

int al[26];
char hello[10001];
int main(int argc, char** argv)
{
	int T, test_case;


	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;

		scanf("%s", hello);
		for (int i = 0; i < strlen(hello); i++)
		{
			al[hello[i] - 'a']++;
		}

		while (1)
		{
			if (al['h' - 'a'] == 0 || al['e' - 'a'] == 0 || al['l' - 'a'] < 2 || al['o' - 'a'] == 0)
				break;
			al['h' - 'a']--;
			al['e' - 'a']--;
			al['l' - 'a']--;
			al['l' - 'a']--;
			al['o' - 'a']--;
			Answer++;
		}
	

	
		cout << "Case #" << test_case + 1 << endl;
		setbuf(stdout, NULL);
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}