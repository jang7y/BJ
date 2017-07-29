#include <iostream>
#include <vector>

using namespace std;

vector<int> match(10);
bool arr[10][10];


int T;
int n, m;
int a, b;
int ret = 0;
int FindFriend( vector<int>&);
int main()
{
	scanf("%d", &T);
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		arr[a][b] = arr[b][a] = true;
	}
	match.clear();

	FindFriend(match);

}

int FindFriend(vector<int>&match)
{



}