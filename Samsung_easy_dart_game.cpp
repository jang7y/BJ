// 아래 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
#include <cstdio>
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

#define PI 3.141592
using namespace std;
vector<pair<int, int> >arr;

vector<int> a;
double angle;
int angle[20] = { 20, 1, 18, 4, 13, 6, 10, 15, 2, 17, 3, 19, 7, 16, 8, 11, 14, 9, 12, 5 };
int main(int argc, char** argv) {

	setbuf(stdout, NULL);

	int TC;
	int test_case;

	scanf("%d", &TC);	// cin 사용 가능
	for (test_case = 1; test_case <= TC; test_case++) {

		printf("%f", atan2(-1,-1)*180/3.141592);
		int a, b, c, d, e;
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		int dart;
		scanf("%d", &dart);
		arr.assign(5, { 0, 0 });
		for (int i = 0; i < dart; i++)
		{
			scanf("%d %d", &arr[i].first, &arr[i].second);
		}
		for (int i = 0; i < dart; i++)
		{
			angle = atan2(arr[i].second, arr[i].first) * 180 / PI;


		}




		// 이 부분에서 정답을 출력하십시오.
		printf("Case #%d\n", test_case);	// cout 사용 가능

	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}