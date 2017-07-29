#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
int T;
int a;
int main()
{
	vector<int>::iterator it;

	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &a);
		if (a == 0)
		{
			if (arr.size() == 0)
			{
				printf("0\n");
			}
			else
			{
				it = min_element(arr.begin(), arr.end());
				printf("%d\n", *it);
				arr.erase(it);
			}
		}
		else
		{
			arr.push_back(a);
		}
	}

}