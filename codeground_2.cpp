
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Answer;
vector<int> arr;

int cost = 987654321;
int state = 0;

int main(int argc, char** argv)
{
	int T, test_case;
	int temp = 0;
	int k = 0;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;
		scanf("%d", &temp);
		arr.assign(temp, 0);
		for (int i = 0; i < temp; i++)
		{
			scanf("%d", &k);
			arr[i] = k;
		}

		for (int i = 0; i < temp; i++)
		{
			if (state == 0)
			{

				if (arr[i] < cost && arr[i] < *max_element(arr.begin()+i, arr.end()))
				{
					state = 1;
					cost = arr[i];
					Answer++;
				}
			}
			else if (state == 1)
			{
				if (arr[i] > cost && arr[i] > *min_element(arr.begin()+1, arr.end()))
				{
					state = 0;
					cost = arr[i];
					Answer++;
				}
			}
		}




		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}