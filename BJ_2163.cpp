#include <iostream>
#include <vector>

using namespace std;
int split(int, int);

int num = 0;


vector< vector<int> > arr(301, vector<int>(301, 0));;

int main()
{
	
	int n, m;

	scanf("%d %d", &n, &m);
	split(n, m);
	printf("%d", num);
	

}

int split(int n, int m)
{

	if (n == 0 || m == 0 || n > 300 || m > 300)
		return 1;

	if (n == 1 && m == 1)
		return 1;
	
		
	if (n == 1 && m!=1)
	{
		num++;
		return split(n, m - 1) + split(n, 1);
	}
	else if (m == 1 && n!=1)
	{
		num++;
		return split(n - 1, m) +split(1, m);
	}
	
	else
	{
		num++;
		return split(n - 1, m) + split(1, m);
	}
	
}