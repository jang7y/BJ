#include <iostream>
#include <vector>

using namespace std;


int T;
int temp = 1;
long long arr[1001][11];


int main()
{

	scanf("%d", &T);
	for (int i = 1; i < 11; i++)
	{
		arr[1][i] = 1;
	}
	for (int i = 1; i <= T; i++)
	{
		arr[i + 1][10] = 1;

		for (int j = 9; j >0; j--)
		{
			arr[i + 1][j] = (arr[i + 1][j+1] + arr[i][j])%10007;
		}
	}
	
	for (int i = 1; i <= 10; i++)
	{
		arr[T][0] = (arr[T][0]+ arr[T][i]) % 10007;
	}

	
	printf("%lld\n\n", arr[T][0]%10007);


}
