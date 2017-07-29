#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int arr[2][2];

vector<double> temp;

void Ca();
void Sw();
int main()
{
	vector<double>::iterator it;
	scanf("%d %d %d %d", &arr[0][0], &arr[0][1], &arr[1][0], &arr[1][1]);

	Ca();

	Sw();
	Ca();

	Sw();
	Ca();

	Sw();
	Ca();

	it = max_element(temp.begin(), temp.end());
	printf("%d", distance(temp.begin(), it));


}
void Sw()
{
	swap(arr[0][0], arr[0][1]);
	swap(arr[1][0], arr[1][1]);
	swap(arr[0][0], arr[1][1]);
}
void Ca()
{
	double sol = ((double)arr[0][0] / arr[1][0]) + ((double)arr[0][1] / arr[1][1]);
	temp.push_back(sol);

}