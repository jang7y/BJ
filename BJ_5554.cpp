#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>


using namespace std;
vector<pair<int,int> > paper;
vector<int>B(10);
int arr[31];
int T;
int sum = 0;
int w, h;
int temp = -1;
int a, b, c, d, e;
int sumb = 0;
int x, y;
int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &a, &b);
		paper.push_back({ a, b });
	}
	sum = 100 * T;
	for (int i = 0; i < T - 1; i++)
	{
		for (int j = i + 1; j < T; j++)
		{
			if (paper[i].first < paper[j].first && paper[i].first + 10  > paper[j].first && paper[i].second> paper[j].second && paper[i].second < paper[j].second + 10)
			{
				x = paper[i].first + 10 - paper[j].first;
				y = paper[j].second + 10 - paper[i].second;
				sum -= x*y;
			}
			else if (paper[i].first< paper[j].first && paper[i].first + 10 > paper[j].first && paper[i].second < paper[j].second && paper[i].second + 10 > paper[j].second)
			{
				x = paper[i].first + 10 - paper[j].first;
				y = paper[i].second + 10 - paper[j].second;
				sum -= x*y;
			}
			else if (paper[i].first > paper[j].first && paper[i].first < paper[j].first + 10 && paper[i].second < paper[j].second && paper[i].second + 10 > paper[j].second)
			{
				x = paper[j].first + 10 - paper[i].first;
				y = paper[i].second + 10 - paper[j].second;
				sum -= x*y;
			}
			else if (paper[i].first > paper[j].first && paper[i].first < paper[j].first + 10 && paper[i].second > paper[j].second && paper[i].second < paper[j].second + 10)
			{
				x = paper[j].first + 10 - paper[i].first;
				y = paper[j].second + 10 - paper[i].second;
				sum -= x*y;
			}

		}
		
	}
	printf("%d", sum);



}