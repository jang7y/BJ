#include <iostream>
#include <stack>
#include <string>

using namespace std;

int num;

int main()
{
	stack<int> Stack;
	string s;
	char s1[10];
	int temp;
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", s1);
		if (!strcmp(s1, "push"))
		{	
			scanf("%d", &temp);
			Stack.push(temp);
		}
		else if (!strcmp(s1, "top"))
		{
			if (Stack.empty())
			{
				printf("%d\n", -1);
			}
			else
				printf("%d\n", Stack.top());
		}
		else if (!strcmp(s1, "size"))
		{
			printf("%d\n", Stack.size());
		}
		else if (!strcmp(s1, "pop"))
		{
			if (Stack.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", Stack.top());
				Stack.pop();
			}
		}
		else if (!strcmp(s1, "empty"))
		{
			printf("%d\n", Stack.empty());
		}
		
	}
	return 0;
}