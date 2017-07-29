#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arr;
int T;
int main()
{
	vector<int>::iterator it;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &T);
		arr.push_back(T);
	}
	printf("%d\n", *max_element(arr.begin(), arr.end()));
	printf("%d", (distance(arr.begin(), find(arr.begin(),arr.end(), *max_element(arr.begin(), arr.end()))))+1);
}