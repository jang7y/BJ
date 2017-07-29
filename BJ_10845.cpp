#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int num = 0;

int main()
{
	queue<int> Queue;
	char ab[10];
	int temp;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", ab);
		if (!strcmp(ab, "push"))
		{
			scanf("%d", &temp);
			Queue.push(temp);

		}
		
		else if (!strcmp(ab, "front"))
		{
			if (Queue.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", Queue.front());
			}
		}
		else if (!strcmp(ab, "back"))
		{
			if (Queue.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", Queue.back());
			}
		}
		
		else if (!strcmp(ab, "size"))
		{
			printf("%d\n", Queue.size());
		}
		else if (!strcmp(ab, "pop"))
		{
			if (Queue.empty())
			{
				printf("%d\n", -1);
			}
			else
			{
				printf("%d\n", Queue.front());
				Queue.pop();
			}
		}
		else if (!strcmp(ab, "empty"))
		{
			printf("%d\n", Queue.empty());
		}


	}


}