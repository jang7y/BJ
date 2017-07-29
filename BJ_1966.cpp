#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

int Print(int*, int);
queue<pair<int,int> > Queue;
priority_queue<int> pq;
int import[110] = { -1, };
int import2[110] = { -1, };

int main()
{
	int doc;
	int iwant;
	int num;
	int max;
	int count = 1;
	int temp1;
	int temp2;

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &doc, &iwant);
		for (int j = 0; j < doc; j++)
		{
			scanf("%d", &import[j]);
			Queue.push(make_pair(j, import[j]));
			pq.push(import[j]);
		}
		while (1)
		{
			temp1 = Queue.front().first;
			temp2 = Queue.front().second;

			Queue.pop();
			
			if ((temp2 == pq.top()))
			{
				pq.pop();
				if (temp1 == iwant)
				{
					printf("%d\n", count);
					break;
				}
				count++;
			}
			else
			{
				Queue.push({ temp1, temp2 });
			}

		}
		fill_n(import, 109, -1);
		count = 1;
		while (!Queue.empty())
			Queue.pop();
		while (!pq.empty())
			pq.pop();


	}

}



	

