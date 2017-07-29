#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> arr;

vector<int> sum;


int T;
int main()
{
	int temp;
	scanf("%d", &T);
	arr.assign(T+1, 0);
	arr[0] = 0;
	sum.assign(T+1, 0);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d", &temp);
		arr[i] = temp;
	}
	sum[0] = arr[0];
	sum[1] = arr[1];
	temp = 0;

	for (int i = 2; i <= T; i++)
	{
		sum[i] = sum[i - 1] + arr[1];
		for (int j = 2; j <= i ; j++)
		{
			sum[i] = max(sum[i-j] + arr[j], sum[i]);
		}

	}
	printf("%d", sum[T]);
}


/*

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<double> arr;
int T;
int sum = 0;
int main()
{


	
	int temp;
	int E;
	int index;
	vector<double>::iterator it;
	vector<double>::iterator it_end;
	scanf("%d", &T);
	arr.assign(T+1, 0);
	arr[0] = 0;
	for (int i = 1; i <= T; i++)
	{
		scanf("%d", &temp);
		arr[i] = (double)temp / i;
	}


	
	E = arr.size();
	while (T)
	{

		it = max_element(arr.begin()+1, arr.begin()+E);
		
		index = distance(arr.begin(), it);
		sum = sum+index*(*it);
		T = T - index;
		E = E - index;	
		printf("´õÇÒ °ª : %d\n", sum);
	}
	printf("%d\n", sum);
	

}

*/