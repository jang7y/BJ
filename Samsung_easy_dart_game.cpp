// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
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

	scanf("%d", &TC);	// cin ��� ����
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




		// �� �κп��� ������ ����Ͻʽÿ�.
		printf("Case #%d\n", test_case);	// cout ��� ����

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}