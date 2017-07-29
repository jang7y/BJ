#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int Answer;
bool Check(string &s);
string s;
int M = 0;

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		//scanf("%s", s);
		cin >> s;
		Check(s);




		cout << "Case #" << test_case + 1 << endl;
		cout << M*2 << endl;
		M = 0;
	}

	return 0;//Your program should return 0 on normal termination.
}

bool Check(string &s)               //스트링을 참조로 받는다.
{
	stack<char> Stack;
	int S = 0; 


	for (int j = 0; j < s.size(); j++)
	{
		if (Stack.empty() && (s[j] == ')' || s[j] == '}' || s[j] == ']'))
		{
			Answer = 0;
			continue;
		}
		else if (s[j] == '(')
		{
			Stack.push(s[j]);  // '('일때면 스택에 넣고
			S = 0;
//			Answer++;
		}
		else if (s[j] == '{')
		{
			Stack.push(s[j]);
			S = 1;
	//		Answer++;
		}
		else if (s[j] == '[')
		{
			Stack.push(s[j]);
			S = 2;
	//		Answer++;
		}
		else if (s[j] == ')'&& Stack.top()=='(')
		{
			Stack.pop();
			Answer++;
		}
		else if (s[j] == '}' && Stack.top() == '{')
		{
			Stack.pop();
			Answer++;
		}
		else if (s[j] == ']' && Stack.top() == '[')
		{
			Stack.pop();
			Answer++;
		}
		else
		{
			Stack.push(s[j]);
		}

		if (Stack.empty())     
		{
			M = max(Answer, M);
			Answer = 0;
			continue;
		}
		else          
		{
			Stack.pop();
			Answer = 0;
		}
	

		M = max(Answer, M);

	}


	
	if (Stack.empty())
	{
		return true;
	}
	else
		return false;

}
