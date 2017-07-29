#include <iostream>
#include <algorithm>
#include <vector>



using namespace std;

vector<long long> v;
int T;
long long sum = 0;
int j = 0;

int main()
{
	scanf("%d", &T);
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	for (int i = 4; i <= T; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < i / 2; j++)
			{

				sum += (v[j] * v[i - j-1]) * 2;
			}
			v.push_back(sum);

			//v[i] = sum;
			sum = 0;
		}
		else
		{
			for (int j = 0; j < i / 2; j++)
			{
				sum += (v[j] * v[i - j-1]) * 2;
			}
			sum += v[i / 2] * v[i/2];
			v.push_back(sum);
			sum = 0;
		}
	}
	printf("%llu", v[T]);


}
