#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> arr;

int main(int argc, char** argv) {


	setbuf(stdout, NULL);

	int TC;
	int test_case;
	int men;
	int check = 0;
	int maxnum = 0;

	scanf("%d", &TC);	// cin ��� ����
	for (test_case = 1; test_case <= TC; test_case++) {
		scanf("%d", &men);
		arr.assign(men, 0);
		for (int i = 0; i < men; i++)
		{
			scanf("%d", &arr[i]);
		}
		sort(arr.begin(), arr.end());

		for (int i = 0; i < men; i++)
		{
			maxnum = max(maxnum, arr[i] + men-i);
		}

		
		for (int i = 0; i < men; i++)
		{
			if (arr[i]+men >= maxnum)
			{
				check++;
			}
		}
	
		printf("Case #%d\n", test_case);	// cout ��� ����
		printf("%d\n", check);
		arr.clear();
		check = 0;
		maxnum = 0;

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}