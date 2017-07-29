#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//vector<vector<pair<int, int> > > arr;
int check[1001][1001];
int city, m;
int a, b;

vector<int> dist;

void dij(int, int);
int main()
{
	for (int i = 1; i < 1001; i++)
	{
		for (int j = 1; j < 1001; j++)
			check[i][j] = 987654321;
	}
	
	int start, des;
	scanf("%d %d", &city, &m);
	//arr.resize(m + 1);
	dist.resize(city + 1,987654321);

	while (m--)
	{
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		if (check[x][y] > z)
		{
			check[x][y] = z;
		}


		
			
	}
	scanf("%d %d", &start, &des);
	dij(start, des);
	printf("%d", dist[des]);

}

void dij(int start, int des)
{
	priority_queue<pair<int, int> > pq;
	dist[start] = 0;

	pq.push({ start, 0 });

	while (!pq.empty())
	{
		int here = pq.top().first;
		int cost = pq.top().second;

		pq.pop();

		if (cost > dist[here])
			continue;

		for (int i = 1; i <= city; i++)
		{
			int nthere = i;
			int ncost = cost + check[here][i];

			if (dist[nthere] > ncost)
			{
				dist[nthere] = ncost;
				pq.push({ nthere, ncost });
			}
		}
	}
}