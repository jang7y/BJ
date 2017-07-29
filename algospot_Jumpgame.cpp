#include <iostream>
#include <vector>

using namespace std;

int arr[101][101];
int T;
int n;
bool sol;
bool DFS(int, int);
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				scanf("%d", &arr[i][j]);
			}
		}
		sol=DFS(1, 1);
		if (sol == true)
			printf("YES\n");
		else
			printf("NO\n");
		

	}
}

bool DFS(int a, int b)
{
	if (a<1 || b<1 || a> n || b> n)
	{
		return false;
	}

	
	if (arr[a][b] == 0)
	{
		return true;
	}
//	DFS(a + arr[a][b],b);
//	DFS(a, b + arr[a][b]);

	return DFS(a + arr[a][b], b) || DFS(a, b + arr[a][b]);

	

}