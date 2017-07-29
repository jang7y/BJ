#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> arr;
int main(int argc, char** argv) {


	setbuf(stdout, NULL);

	int TC;
	int test_case;
	int a, b;
	int sum = 0;
	int temp = 0;
	

	scanf("%d", &TC);	
	for (test_case = 1; test_case <= TC; test_case++) {

		scanf("%d %d", &a, &b);
		arr.assign(a,0);
		for (int i = 0; i < a; i++)
		{
			scanf("%d",&arr[i] );
		}

		sort(arr.begin(), arr.end());
	
		for (int i = a-1; i >=a-b; i--)
		{
			sum += arr[i];
		}

		printf("Case #%d\n", test_case);	
		printf("%d\n", sum);
		sum = 0;
		arr.clear();
	}

	return 0;	
}