#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	int num;
	scanf("%d", &num);

	vector<pair<int, int> >a(num+1);

	for (int i = 1; i <= num; i++)
	{
		scanf("%d %d", &a[i].first, &a[i].second);
	}

	sort(a.begin()+1, a.end());

	for (int i = 1; i <= num; i++)
	{
		printf("%d %d\n", a[i].first, a[i].second);
	}

	
}

