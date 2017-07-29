#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
vector<int>arr;
int sub;
int hak;
int sol = 0;
int main(int argc, char** argv) {

	setbuf(stdout, NULL);

	int T;
	int test_case;
	int temp;

	scanf("%d", &T);	// Codeground 시스템에서는 C++에서도 scanf 함수 사용을 권장하며, cin을 사용하셔도 됩니다.
	for (test_case = 1; test_case <= T; test_case++) {
		scanf("%d %d", &sub, &hak);
		arr.assign(sub,0);
		for (int i = 0; i < sub; i++)
		{
			scanf("%d", &temp);
			arr[i] = temp;
		}
//		sort(arr.begin(), arr.begin()+sub-1);

		for (int i = 0; i<sub; i++)
		{
			printf("%d ", arr[i]);
		}
		
		for (int i = sub - 1; i >= 0; i--)
		{
			sol += arr[i];
		}
		printf("%d", sol);





		// 이 부분에서 정답을 출력하십시오. Codeground 시스템에서는 C++에서도 printf 사용을 권장하며, cout을 사용하셔도 됩니다.
		printf("Case #%d\n", test_case);

	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}