/*#include <iostream>
#include <vector>

using namespace std;

char arr[51][51];
char sol[51];
int T;
char check;
//int check = 0;
int temp = 0;
int Q = 0;
int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", arr[i]);
	}
	for (int i = 0; i < strlen(arr[0]); i++)
	{
		check = arr[0][i];
		sol[i] = check;
		for (int j = 0; j < T; j++)
		{
			if (check != arr[j][i])
			{
				sol[i] = '?';
				break;
			}
		}

	}
	for (int i = 0; i < strlen(sol); i++)
	{
		printf("%c", sol[i]);
	}
}
*/
#include <iostream>
#include <string>
using namespace std;

void getStrings(string* const arr, const unsigned int inputNo);
string getPattern(const string* const arr, const unsigned int inputNo);


int main() {
	unsigned int inputNo;
	cin >> inputNo;

	string* const arr = new string[inputNo];
	getStrings(arr, inputNo);

	cout << getPattern(arr, inputNo) << endl;
	return 0;
}

void getStrings(string* const arr, const unsigned int inputNo) {
	for (unsigned int i = 0; i < inputNo; i++) {
		arr[i].resize(55);
		cin >> arr[i];
	}
}

string getPattern(const string* const arr, const unsigned int inputNo)
{
	char temp;
	string pattern;
	pattern.resize(55);

	for (unsigned int i = 0; i < arr[0].length(); i++) {
		temp = arr[0][i];

		for (unsigned int j = 1; j < inputNo; j++) {
			if (arr[j][i] != temp) {
				temp = '?';
				break;
			}
		}
		pattern[i] = temp;
		pattern[i + 1] = '\0';
	}
	return pattern;
}