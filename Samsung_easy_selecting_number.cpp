// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int index = 1;

vector<unsigned long long> arr;
vector<unsigned long long> sol;

int main(int argc, char** argv) {

	setbuf(stdout, NULL);

	int TC;
	int test_case;
	int a;
	unsigned long long sum = 0;

	scanf("%d", &TC);	// cin 사용 가능
	for (test_case = 1; test_case <= TC; test_case++) {	
		scanf("%d", &a);
		arr.assign(a,0);
		sol.assign(a,0);
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &arr[i]);
		}
		sort(arr.begin(), arr.end());

		for (int i = 0; i < arr.size(); i++)
		{
			sum = sum^arr[i];
		}
		
		arr.clear();
		sol.clear();

		printf("Case #%d\n", test_case);	// cout 사용 가능
		printf("%d\n", sum);
		sum = 0;
		index = 1;

	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}