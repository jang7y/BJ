#include <iostream>
#include <vector>


using namespace std;

int N, K;
vector<int> arr;
int sol = 0;

int main()
{
	int temp;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}

	for (int i = arr.size() - 1; i >= 0; i--)
	{
		if (K / arr[i] != 0)
		{
			sol += K / arr[i];
			K = K%arr[i];
		}
	}
	printf("%d", sol);
}