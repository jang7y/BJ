#include <iostream>
#include <deque>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{
	deque<int> dq;
	int num;
	char input[100];
	int temp;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", input);
		if (!strcmp(input, "push_front"))
		{
			scanf("%d", &temp);
			dq.push_front(temp);
		}

		else if (!strcmp(input, "push_back"))
		{
			scanf("%d", &temp);
			dq.push_back(temp);
		}
		else if (!strcmp(input, "pop_front"))
		{
			if (dq.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", dq.front());
				dq.pop_front();
			}
		}
		else if (!strcmp(input, "pop_back"))
		{
			if (dq.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", dq.back());
				dq.pop_back();
			}
		}
		else if (!strcmp(input, "size"))
		{
			printf("%d\n", dq.size());
		}
		else if (!strcmp(input, "empty"))
		{
			printf("%d\n", dq.empty());
		}
		else if (!strcmp(input, "front"))
		{
			if (dq.empty())
			{
				printf("%d\n", -1);
			}
			else
				printf("%d\n", dq.front());
		}
		else if (!strcmp(input, "back"))
		{
			if (dq.empty())
			{
				printf("%d\n", -1);
			}
			else
				printf("%d\n", dq.back());
		}


	}
	return 0;
}
