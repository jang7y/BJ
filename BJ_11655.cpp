#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string st;
int sz;
int check;
int main()
{
//	printf("d : %d\n", 's');
	getline(cin, st);
	sz = st.size();
	for (int i = 0; i < sz; i++)
	{
		if (st[i] <= 'Z' && st[i] >= 'A')
		{
			st[i] += 13;
			if (st[i] > 'Z')
				st[i] -= 26;
			printf("%c", st[i]);
		}
		else if (st[i] <= 'z' && st[i] >= 'a')
		{
			//st[i] += 13;
			check = st[i] + 13;
			if (check > 'z')
			{
				st[i] = check - 'z' + 'a' - 1;
			}
			else
				st[i] += 13;
			printf("%c", st[i]);
		}
		else
			printf("%c", st[i]);
	}

}