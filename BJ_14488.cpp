#include <iostream>
#include <vector>

using namespace std;

int N;
double T;
vector< long long> x;
vector< long long> v;
unsigned long long temp;
vector< double> check[50000];

int MEET();


int main()
{
	scanf("%d %lf", &N, &T);
	for (int i = 0; i < N; i++)
	{
		scanf("%lu", &temp);
		x.push_back(temp);
	}
	for (int i = 0; i < N; i++)
	{
		scanf("%lu", &temp);
		v.push_back(temp);
	}
	printf("%d", MEET());
	
	
}

int MEET()
{
	double leftm = -1;
	double rightm = 987654321;
	for (int i = 0; i < N; i++)
	{
		if (x[i] - v[i] * T < 1)
		{
			check[i].push_back(1);
		}
		else
		{
			check[i].push_back(x[i] - v[i] * T);
		}


		check[i].push_back(x[i] + v[i] * T);

	//	printf("check °ª : %lf %lf\n", check[i][0], check[i][1]);



		if (rightm >= x[i] + v[i] * T)
		{
			rightm = x[i] + v[i] * T;
		}
		if (leftm <= x[i] - v[i] * T)
		{
			leftm = x[i] - v[i] * T;
		}

	}
	for (int i = 0; i < N; i++)
	{
		if (rightm < check[i][0])
		{
			return 0;
		}
	}
	
	return 1;
	
}