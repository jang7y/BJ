#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int check = 0;
vector<int >arr;
int main()
{
	int T;
	int temp;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	printf("%d %d", arr[0], arr[arr.size()-1]);
}