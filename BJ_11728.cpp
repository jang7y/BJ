#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int a, b;

vector<int> first;
int temp;
vector<int> second;
int main()
{
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a + b; i++)
	{
		scanf("%d", &temp);
		first.push_back(temp);
	}
	sort(first.begin(), first.end());
	for (int i = 0; i < first.size(); i++)
		printf("%d ", first[i]);


}