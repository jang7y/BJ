#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int N;
int temp;
double sum = 0;
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{
		sum += arr[i];
	}
	
	sum /= (arr[N - 1] * N);
	printf("%.2lf", sum * 100);
	
}