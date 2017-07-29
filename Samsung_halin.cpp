#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int sol = 0;



int main(int argc, char** argv) {
	/* �Ʒ� freopen �Լ��� sample_input.txt �� read only �������� �� ��,
	������ ǥ�� �Է�(Ű����) ��� sample_input.txt ���Ϸ� ���� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	���� ������ PC ���� �׽�Ʈ �� ����, �Է°��� sample_input.txt�� ������ �� freopen �Լ��� ����ϸ�,
	�� �Ʒ����� scanf �Լ� �Ǵ� cin�� ����Ͽ� ǥ���Է� ��� sample_input.txt ���Ϸ� ���� �Է°��� �о� �� �� �ֽ��ϴ�.
	����, ���� PC���� freopen �Լ��� ������� �ʰ� ǥ���Է��� ����Ͽ� �׽�Ʈ�ϼŵ� �����մϴ�.
	��, Codeground �ý��ۿ��� "�����ϱ�" �� ������ �ݵ�� freopen �Լ��� ����ų� �ּ�(//) ó�� �ϼž� �մϴ�. */
	//freopen("sample_input.txt", "r", stdin);

	/* setbuf �Լ��� ������� ������, ������ ���α׷��� ���� �ð� �ʰ��� ���� ���� �Ǿ��� ��,
	C++���� printf�� ����� ���, printf�� ����� ������ ä������ �ʰ� '0��'�� �� ���� �ֽ��ϴ�.
	���� printf�� ����� ��� setbuf(stdout, NULL) �Լ��� �ݵ�� ����Ͻñ� �ٶ��ϴ�. */
	setbuf(stdout, NULL);

	int T;
	int test_case;
	int a, b, c;
	int stop, train, pay, tour;

	scanf("%d", &T);	// Codeground �ý��ۿ����� C++������ scanf �Լ� ����� �����ϸ�, cin�� ����ϼŵ� �˴ϴ�.
	for (test_case = 1; test_case <= T; test_case++) {
		scanf("%d %d %d", &stop, &train, &pay);
		vector < vector<int> > arr(stop+1, vector<int>(stop+1, 987654321));
		for (int i = 0; i < train; i++)
		{
			scanf("%d %d %d", &a, &b, &c);
			arr[a][b] =  c;
			arr[b][a] = c;
		}

		for (int i = 1; i <= stop; i++)
		{
			for (int j = 1; j <= stop; j++)
			{
				for (int k = 1; k <= stop; k++)
				{
					arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
				}
			}
		}
		for (int i = 1; i <= stop; i++)
		{
			for (int j = 1; j <= stop; j++)
			{
				if (arr[i][j] == 987654321)
				{
					arr[i][j] = 0;
				}
			}
		}


		scanf("%d", &tour);

		for (int i = 0; i < tour; i++)
		{
			scanf("%d %d", &a, &b);
			if (arr[a][b] > pay)
			{
				sol++;
			}
			
		}




		// �� �κп��� ������ ����Ͻʽÿ�. Codeground �ý��ۿ����� C++������ printf ����� �����ϸ�, cout�� ����ϼŵ� �˴ϴ�.
		printf("Case #%d\n", test_case);
		printf("%d\n", sol);
		sol = 0;

	}

	return 0;	// �������� �� �ݵ�� 0�� �����ؾ� �մϴ�.
}