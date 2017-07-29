

/* 일단 다익스트라는 어느 한 점에서 다른 모든 점까지의 최솟값을 찾는 알고리즘이다.
참고로 플로이드는 모든 점에서 다른 모든 점까지의 최솟값 (즉, 최소 거리) 를 찾는 알고리즘이다. 
이 차이를 알아두자.
*/
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define INF 987654321  // 무한대값
int v, m, k;
int a, b, c;

priority_queue<pair <int, int> > pq;

vector<pair<int, int> > arr[20001];	  //
int main()
{
	scanf("%d %d", &v, &m);
	scanf("%d", &k);
	while (m--)
	{
		scanf("%d %d %d", &a, &b, &c);
		arr[a].push_back({ b, c });			// a점에서 b점으로 갈 때, 가중치가 c일때,
											// arr[a]에 (b,c) (b1, c1) 추가하면서 넣는다.
	}

	vector<int> dist(v + 1, INF);		// 최종 거리가 저장될 배열, 초기값을 일단 무한대로 잡아 놓는다.

	dist[k] = 0;				// 다익스트라는 한 점에서 다른 점까지의 거리를 찾는 것이므로, 자기 자신까지의 거리는 당연히 0

	pq.push({ k, 0 });			// 시작점과 거리를 우선수위 큐에 넣는다.

	while (!pq.empty())
	{
		int here = pq.top().first;	// 출발점과
		int cost = pq.top().second;		// 가중치(cost)를 저장하고, pq에서 꺼낸다.

		pq.pop();

		if (cost > dist[here])		// 꺼낸 비용이 이미 현재 나와있는 cost보다 크다면 아예 신경 쓸 필요가 없다.
			continue;

		for (int i = 0; i < arr[here].size(); i++)		// 현재 출발점에서 각각 다른 점까지의 cost를 비교.
		{
			int nthere = arr[here][i].first;			// 현재 출발점에서 도착할 목적지를 nthere에 저장
			int ncost = cost + arr[here][i].second;		// 현재 출발점에서 도착할 목적지 까지의 cost를 ncost에 저장. 
														// 간선을 거쳐 갈 수 있으므로 현재 cost에 더해주어야 한다.
														// 예를 들어, 1->3->5 를 거쳐 간다면 1->3 까지의 거리 + 3->5 까지의 거리
														
			if (ncost < dist[nthere])				// 현재 계산한 출발점에서 목적지까지의 cost와 이미 과거에 계산했던 도착지점 까지의  
													// 거리가 더 작다면 갱신해준다.
			{
				dist[nthere] = ncost;				// ncost로 갱신해주고,
				pq.push({ nthere, ncost });			// 도착지점과 그 도착지점 까지의 총 cost를 큐에 넣는다.
			}
		}
	}

	for (int i = 1; i <= v; i++)
	{
		if (dist[i] == INF)
		{
			printf("INF\n");
		}
		else
		{
			printf("%d\n", dist[i]);
		}
	}


}

*/


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<pair<int, int> > > arr;

int v, m;
int start;
void dij();
vector<int> dist;
int main()
{
	int a, b, c;
	scanf("%d %d", &v, &m);
	dist.resize(v + 1, 987654321);
	arr.resize(m + 1);

	scanf("%d", &start);
	while (m--)
	{
		scanf("%d %d %d", &a, &b, &c);
		arr[a].push_back({ b, c });
	}

	dij();

	for (int i = 1; i <= v; i++)
	{
		if (dist[i] == 987654321)
		{
			printf("INF\n");
		}
		else
			printf("%d\n", dist[i]);
	}

}

void dij()
{
	priority_queue<pair<int, int> >pq;
	dist[start] = 0;
	pq.push({ start, 0 });

	while (!pq.empty())
	{
		int here = pq.top().first;
		int cost = pq.top().second;

		pq.pop();

		if (cost > dist[here])
			continue;

		for (int i = 0; i < arr[here].size(); i++)
		{
			int nthere = arr[here][i].first;
			int ncost = cost+ arr[here][i].second;

			if (ncost < dist[nthere])
			{
				dist[nthere] = ncost;
				pq.push({ nthere, ncost });
			}
			
		}
	}

}