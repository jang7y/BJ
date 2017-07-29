#include <cstdio>
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char** argv) {
	
	setbuf(stdout, NULL);

	int T;
	int test_case;
	int a;
	long long b;
	long long sum=0;
	vector<int>::iterator it;
	int index;
	long long num;
	int i, j;


	scanf("%d", &T);	
	for (test_case = 1; test_case <= T; test_case++) {

		scanf("%d %lld", &a, &b);
		vector<int>arr(a);
		num = b;
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &arr[i]);
		}
		it = max_element(arr.begin(), arr.end());
		index = distance(arr.begin(), it);
		i = j = index;
		
		sum+= *it;
		num = sum;

	
	
	
		while (1)
		{
			if (sum>=b || num >=b )
			{
				index = min(abs(index - i), abs(index - j))+1;
				break;
			}
			if (i == 0)
			{
				sum += arr[++i];
			}
			else if (j == a - 1)
			{
				sum += arr[--i];
			}
			else
			{
				sum += arr[--i];
				num += arr[++j];
			}
			

		}



		




		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
		printf("#testcase%d\n", test_case);
		printf("%d\n", index);
		sum = 0;
	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}