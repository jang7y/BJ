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



		




		// 이 부분에서 정답을 출력하십시오. Codeground 시스템에서는 C++에서도 printf 사용을 권장하며, cout을 사용하셔도 됩니다.
		printf("#testcase%d\n", test_case);
		printf("%d\n", index);
		sum = 0;
	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}