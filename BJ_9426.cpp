#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> number;
vector<int> snumber;
unsigned long long sum = 0;
int main()
{
	int N, K;
	int temp;
	scanf("%d %d", &N, &K);
	snumber.assign(0, K);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		number.push_back(temp);
	}
	for (int i = 0; i <= number.size() - K; i++)
	{
		for (int j = i; j < i+K; j++)
		{
			snumber.push_back(number[j]);
		}
		sort(snumber.begin(), snumber.end());
		sum += snumber[((K + 1) / 2)-1];
		snumber.clear();
	}
	printf("%lld", sum);	

}