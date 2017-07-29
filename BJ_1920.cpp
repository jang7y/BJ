#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;

int first[100001];
int second[100001];
int T;
int temp;
int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
		//first[temp] = 1;
	}
	sort(arr.begin(), arr.end());

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &temp);
		if (find(arr.begin(), arr.end(), temp) != arr.end())
			printf("1\n");
		else
			printf("0\n");
	}
}