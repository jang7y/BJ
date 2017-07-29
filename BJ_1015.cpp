#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;
vector<int> arr;
vector<int> sol;
int temp;
int dis;
int main()
{
	vector<int>::iterator it;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
		sol.push_back(temp);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < T; i++)
	{
		it=find(arr.begin(), arr.end(), sol[i]);
		*it = -1;
		dis = distance(arr.begin(), it);
		printf("%d ", dis);
	}


}