#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector< pair<int, int> >arr;

char com[31];
int T;
int son;
int a, b;
int main()
{
	vector< pair<int, int> >::iterator it;
	scanf("%d %d", &T, &son);
	while (T--)	
	{
		scanf("%s", com);
		if (com[0] == 'o')
		{
			scanf("%d %d", &a, &b);
			arr.push_back({ b, a });
			for (int i = 0; i < arr.size(); i++)
			{
				printf("%d ", arr[i].second);
			}
			printf("\n");
		}
		else if (com[0] == 's')
		{
			sort(arr.begin(), arr.end());
			for (int i = 0; i < arr.size(); i++)
			{
				printf("%d ", arr[i].second);
			}
			printf("\n");
		}
		else
		{
			scanf("%d", &a);
			for (int i = 0; i < arr.size(); i++)
			{
				if (arr[i].second == a)
				{
					arr.erase(arr.begin() + i);
				}
			}
			if (arr.empty())
			{
				printf("sleep\n");
			}
		//	it = find(arr.begin(), arr.end(), a);
		//	it=arr.erase(it);
			for (int i = 0; i < arr.size(); i++)
			{
				printf("%d ", arr[i].second);
			}
			printf("\n");		
		}


		
		

	}
	
}