// �Ʒ� �⺻ ������ �ڵ带 ���� �Ǵ� �����ϰ� ������ �ڵ带 ����ϼŵ� �˴ϴ�.
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

	scanf("%d", &TC);	// cin ��� ����
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

		printf("Case #%d\n", test_case);	// cout ��� ����
		printf("%d\n", sum);
		sum = 0;
		index = 1;

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}