#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string st;

int T;
char temp;
int main()
{
	scanf("%d", &T);
	scanf("%c", &temp);
	while (T--)
	{
		
		getline(cin, st);
		if(st[0]>='a')
			st[0] = st[0]-32;
		cout << st << endl;
	}
}