// https://www.acmicpc.net/source/1003
// 

#include <iostream>

using namespace std;
void Sol(int num);


int main()
{
	int test;
	int num;


	cin >> test;

	for (int i = 0; i < test; i++)
	{
		cin >> num;
		Sol(num);

	}
	return 0;
}

void Sol(int num)
{
	int arr[45][2];

	for (int i = 0; i < 45; i++)
	{
		memset(arr[i], -1, sizeof(arr[i]));
	}

	for (int i = 0; i < 45; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;

	}

	arr[0][0] = 1;
	arr[0][1] = 0;
	arr[1][0] = 0;
	arr[1][1] = 1;

	for (int i = 2; i <= num; i++)
	{
		arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
		arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
	}

	cout << arr[num][0] << " " << arr[num][1] << endl;


}