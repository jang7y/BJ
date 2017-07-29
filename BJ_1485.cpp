#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> x;
vector<int> y;
vector<int> len;
int T;
int temp;
int a;
int dis;
int check = 0;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		len.clear();
		x.clear();
		y.clear();
		for (int i = 0; i < 4; i++)
		{
			scanf("%d %d", &temp, &a);
			x.push_back(temp);
			y.push_back(a);
		}
		x.push_back(x[0]);
		y.push_back(y[0]);

		for (int i = 1; i < 4; i++)
		{ 
			for (int j = 1; j < 4; j++)
			{
				temp = abs(x[i] - x[i])*abs(x[i - 1] - x[i]) + abs(y[i - 1] - y[i])*abs(y[i - 1] - y[i]);
				len.push_back(temp);
			}
		}
		sort(len.begin(), len.end());
		if (len[0] == len[1] && len[0] < len[2])
			printf("1\n");
		else
			printf("0\n");
		

	}


}