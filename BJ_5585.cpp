#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int T;
int sum = 0;
vector<int> x;
vector<int> y;
int a, b;
int temp;
int main()
{
	int temp2;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &a, &b);
		x.push_back(a);
		y.push_back(b);
	}
	a = *min_element(x.begin(), x.end());
	b = *min_element(y.begin(), y.end());
	temp = min(a, b);

	a = *max_element(x.begin(), x.end());
	b = *max_element(y.begin(), y.end());

	temp2 = max(a, b);

	printf("%d %d", temp, temp2);



	printf("%d\n", (temp2-temp)*(temp2-temp));


}