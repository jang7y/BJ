#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;


bool Check(string&);

int main()
{
	vector<char> v;
	stack <char> Stack;
	int num;
	string s;
	char arr[51];
	char c;

	cin >> num;


	for (int i = 0; i < num; i++)
	{
		cin >> s;
		if (Check(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
}

bool Check(string &s)
{
	stack<char> Stack;

	for (int j = 0; j < s.size(); j++)
	{
		if (s[j] == '(')
		{
			Stack.push(s[j]);
		}
		else
		{
			if (Stack.empty())
			{
				return false;
			}
			else
				Stack.pop();
		}

	}

	if (Stack.empty())
	{
		return true;
	}
	else
		return false;

}