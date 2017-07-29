#include <iostream>
#include <vector>

using namespace std;

vector<char> arr(5000000);
int T;


int main()
{
	while (getchar() != EOF)
	{
		if (arr[T] == 0)
		{
			arr[T] = 1;
			printf("%d ", T);

		}
	}
	
}