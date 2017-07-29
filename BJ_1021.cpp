/*

#include<iostream>
#include<deque>
using namespace std;
int main()
{
	int n, m, arr[55] = { 0, }, ans = 0;
	deque<int> dq, left, right;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) dq.push_back(i);
	for (int i = 0; i<m; i++)
	{
		cin >> arr[i];
		if (arr[i] == dq.front())
		{
			dq.pop_front();
			continue;
		}

		left.clear(); right.clear();
		left = right = dq;
		dq.clear();
		int cnt[2] = { 0, };
		while (left.front() != arr[i])
		{
			left.push_back(left.front());
			left.pop_front();
			cnt[0]++;
		} left.pop_front();

		while (right.front() != arr[i])
		{
			right.push_front(right.back());
			right.pop_back();
			cnt[1]++;
		} right.pop_front();

		if (cnt[0]<cnt[1]) { ans += cnt[0]; dq = left; }
		else { ans += cnt[1]; dq = right; }
	}
	cout << ans << endl;

	return 0;
}
*/


#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

deque<int> dq;
int T;
int temp;
int a;
vector<int> arr;
deque<int>::iterator it;
int dis;
int sol = 0;
int check = 0;
int k = 1;
int main()
{
 	scanf("%d %d", &T, &a);
	
	for (int i = 1; i <= T; i++)
	{
		dq.push_back(i);
	}
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &temp);

		arr.push_back(temp);
	}
	
	while (arr.size()!=0)
	{
		if (dq.front() == arr[check])
		{
			dq.pop_front();
			arr.erase(arr.begin());
		}

		else
		{
			it = find(dq.begin(), dq.end(), arr[0]);
			dis = distance(dq.begin(), it);

			if ( (int)dis > dq.size()/2) // 뒤에서 더 가깝다면
			{
				sol++;
				temp = dq.back();


				dq.pop_back();

				dq.push_front(temp);

	/*			printf("뒤 : ");
				for (int k = 0; k < dq.size(); k++)
				{
					printf("%d ", dq[k]);
				}
				printf("\n");
				*/
			}
			else
			{
				sol++;
				temp = dq.front();
				
				dq.pop_front();
				dq.push_back(temp);

	/*			printf(" 앞");
				for (int k = 0; k < dq.size(); k++)
				{
					printf("%d ", dq[k]);
				}
				printf("\n");
				*/
			}
		}
	}
	printf("%d", sol);
	
}
