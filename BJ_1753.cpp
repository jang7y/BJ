

/* �ϴ� ���ͽ�Ʈ��� ��� �� ������ �ٸ� ��� �������� �ּڰ��� ã�� �˰����̴�.
����� �÷��̵�� ��� ������ �ٸ� ��� �������� �ּڰ� (��, �ּ� �Ÿ�) �� ã�� �˰����̴�. 
�� ���̸� �˾Ƶ���.
*/
/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define INF 987654321  // ���Ѵ밪
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
		arr[a].push_back({ b, c });			// a������ b������ �� ��, ����ġ�� c�϶�,
											// arr[a]�� (b,c) (b1, c1) �߰��ϸ鼭 �ִ´�.
	}

	vector<int> dist(v + 1, INF);		// ���� �Ÿ��� ����� �迭, �ʱⰪ�� �ϴ� ���Ѵ�� ��� ���´�.

	dist[k] = 0;				// ���ͽ�Ʈ��� �� ������ �ٸ� �������� �Ÿ��� ã�� ���̹Ƿ�, �ڱ� �ڽű����� �Ÿ��� �翬�� 0

	pq.push({ k, 0 });			// �������� �Ÿ��� �켱���� ť�� �ִ´�.

	while (!pq.empty())
	{
		int here = pq.top().first;	// �������
		int cost = pq.top().second;		// ����ġ(cost)�� �����ϰ�, pq���� ������.

		pq.pop();

		if (cost > dist[here])		// ���� ����� �̹� ���� �����ִ� cost���� ũ�ٸ� �ƿ� �Ű� �� �ʿ䰡 ����.
			continue;

		for (int i = 0; i < arr[here].size(); i++)		// ���� ��������� ���� �ٸ� �������� cost�� ��.
		{
			int nthere = arr[here][i].first;			// ���� ��������� ������ �������� nthere�� ����
			int ncost = cost + arr[here][i].second;		// ���� ��������� ������ ������ ������ cost�� ncost�� ����. 
														// ������ ���� �� �� �����Ƿ� ���� cost�� �����־�� �Ѵ�.
														// ���� ���, 1->3->5 �� ���� ���ٸ� 1->3 ������ �Ÿ� + 3->5 ������ �Ÿ�
														
			if (ncost < dist[nthere])				// ���� ����� ��������� ������������ cost�� �̹� ���ſ� ����ߴ� �������� ������  
													// �Ÿ��� �� �۴ٸ� �������ش�.
			{
				dist[nthere] = ncost;				// ncost�� �������ְ�,
				pq.push({ nthere, ncost });			// ���������� �� �������� ������ �� cost�� ť�� �ִ´�.
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