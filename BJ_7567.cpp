#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;


char arr[1000002];
int al[2][27];	// al[0][i] : �빮�� ���� 
			    // al[1][i] : �ҹ��� ����

int small;
int big;

int main()
{
	int len;
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++)   // �Էµ� ���� ���̸�ŭ
	{
		if (arr[i] <= 'Z')			// ��, �빮�ڸ� 
			al[0][arr[i] - 'A']++;	// �ش� ���ĺ� �ѹ����� ����

		else                       // �ҹ��ڸ�
			al[1][arr[i] - 'a']++;  // �ش� ���ĺ� �ѹ����� ����
	}


	big = *max_element(al[0], al[0] + 26);    // �빮�� ��, �ִ��� ã�´�. (� ���ĺ������� ���� ������, ������ �ľ�)
	small = *max_element(al[1], al[1] + 26);  // �ҹ��� ��, �ִ��� ã�´�. ( � ���ĺ������� ���� ������ ,������ �ľ�)

	if (big == 0 || big < small)			// �ҹ��ڸ� �Ű��� �� ��, ��, �빮�ڰ� �ϳ��� ���ų�, �ҹ����� �ִ��� �� Ŭ ��
	{
		if (count(al[1], al[1] + 26, small) >1)	  // �ҹ����� �ִ��� ������ ��������� (��, aabcc ���� ���)
			printf("?");					// ? ���

		else                    // �ִ��� 1�����, �� �����ϴٸ�
			printf("%c", distance(al[1], find(al[1], al[1] + 26, small) + 'A'));  // �� �ִ��� �ѹ����� ã�Ƽ� �빮�ڷ� ���
	}																			// �迭�� al[1][0]~ al[1][25] ���� �����Ƿ�

	else if (small == 0 || big> small)	// �빮�ڸ� �Ű��� �� ��, ��, �ҹ��ڰ� �ϳ��� ���ų� �빮���� �ִ��� �� Ŭ ��
	{
		if (count(al[0], al[0] + 26, big) > 1)	// �빮���� �ִ��� ������ ��������� (��, AACCB ���� ��� )
			printf("?");  // ? ���

		else              // �ִ��� �����ϴٸ�
			printf("%c", distance(al[0], find(al[0], al[0] + 26, big) + 'A')); // �� �ִ��� �ѹ����� ã�Ƽ� �빮�ڷ� ���
	}

	else if (big == small)  // �빮�ڿ� �ҹ����� �ִ��� ���ٸ� ��, � ���ĺ������� ������ ��¶�� �ִ� ������ �����Ƿ� ������ ? ���
		printf("?");

		


	
}