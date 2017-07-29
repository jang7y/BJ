#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
int M = 987654321;
int T;
int temp;
int sol = -1;
void Check(int);

int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());


	for (int i = 0; i < arr.size(); i++)
	{
		sol = max(sol, arr[i] * (T - i));
	}

	/*
	for (int j = 0; j < arr.size(); j++)
	{
		M = 987654321;
		for (int i = arr.size() - 1; i >= j; i--)
		{
			M = min(M, arr[i] * (T-j));
		}
		sol = max(M, sol);
	}
	*/
	printf("%d", sol);

}