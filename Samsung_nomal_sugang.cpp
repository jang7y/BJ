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

	scanf("%d", &T);	// Codeground �ý��ۿ����� C++������ scanf �Լ� ����� �����ϸ�, cin�� ����ϼŵ� �˴ϴ�.
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





		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
		printf("Case #%d\n", test_case);

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}