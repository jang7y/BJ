#include <iostream>
#include <vector>


using namespace std;

int arr[1001];
vector<int> sol;

int n, k;
int main()
{
	scanf("%d %d", &n, &k);
	for (int i = 2; i <= 1000; i++)
	{
		arr[i] = 1;
	}

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] != 0)
		{
			for (int j = i; j <= n; j = j + i)
			{
				if (arr[j] != 0)
				{
					arr[j] = 0;
					sol.push_back(j);
				}
			}
		}
	}
	
	printf("%d", sol[k-1]);

}