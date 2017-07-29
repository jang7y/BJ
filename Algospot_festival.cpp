#include <iostream>
#include <vector>

using namespace std;

vector<int> fs;
//int fs[101];
int T;
int a, b;
int temp;
int sum = 0;
double m = 987654321;

int main()
{
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &a, &b);
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &temp);
			fs.push_back(temp);
		}

		for (int k = b; k<=a; k++)
		{
			for (int z = 0; z <= a-k; z++)
			{
				for (int s = z; s <z+k && s<a; s++)
				{

					sum = sum + fs[s];

				}
				if (m>(double)sum / k)
				{
					m = (double)sum / k;
				}
				sum = 0;
			}
		}
		printf("%.12f\n", m);
		m = 987654321;
		fs.clear();
	}
}