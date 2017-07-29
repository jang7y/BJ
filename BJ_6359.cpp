#include <iostream>
#include <vector>

using namespace std;
int T;
int main()
{
	int sol = 0;
	vector<bool> arr(101);
	printf("asdf : %d\n", arr.size());
	
	// Test Code
	arr[1] = true;
	printf("Before size : %d\n", arr.size());
	arr.erase(arr.begin(), arr.begin()+5);
	printf("After size :  %d\n",  arr.size());

	// Test Code
	}
