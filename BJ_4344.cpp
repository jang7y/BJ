#include <iostream>
#include <vector>


using namespace std;
vector<int> arr;

int T;
int sum = 0;
double sol = 0;
int ans = 0;
int main()
{
	int a, temp;
	scanf("%d", &T);
	while (T--)
	{
		sum = 0;
		ans = 0;
		scanf("%d", &a);
		//arr.resize(a);
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &temp);
			sum += temp;
			arr.push_back(temp);
		}
		sol = (double)sum / a;
		for (int i = 0; i < a; i++)
		{
			if (arr[i] > sol)
			{
				ans++;
			}
		}

		printf("%.3lf%%\n", ((double)ans / a)*100);
		
		arr.clear();
	}
}