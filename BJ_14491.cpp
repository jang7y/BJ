#include <iostream>
#include< vector>

using namespace std;

vector<int>arr;
int main()
{
	int a;
	scanf("%d", &a);
	while (a >= 9)
	{
		arr.push_back(a % 9);
		a /= 9;
	}
	arr.push_back(a);
	for (int i = arr.size()-1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
}