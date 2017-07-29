#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;


char arr[1000002];
int al[2][27];	// al[0][i] : 대문자 저장 
			    // al[1][i] : 소문자 저장

int small;
int big;

int main()
{
	int len;
	scanf("%s", arr);
	len = strlen(arr);
	for (int i = 0; i < len; i++)   // 입력된 문장 길이만큼
	{
		if (arr[i] <= 'Z')			// 즉, 대문자면 
			al[0][arr[i] - 'A']++;	// 해당 알파벳 넘버링에 저장

		else                       // 소문자면
			al[1][arr[i] - 'a']++;  // 해당 알파벳 넘버링에 저장
	}


	big = *max_element(al[0], al[0] + 26);    // 대문자 중, 최댓값을 찾는다. (어떤 알파벳인지는 아직 모르지만, 갯수만 파악)
	small = *max_element(al[1], al[1] + 26);  // 소문자 중, 최댓값을 찾는다. ( 어떤 알파벳인지는 아직 모르지만 ,갯수만 파악)

	if (big == 0 || big < small)			// 소문자만 신경써야 할 때, 즉, 대문자가 하나도 없거나, 소문자의 최댓값이 더 클 때
	{
		if (count(al[1], al[1] + 26, small) >1)	  // 소문자의 최댓값의 갯수가 여러개라면 (즉, aabcc 같은 경우)
			printf("?");					// ? 출력

		else                    // 최댓값이 1개라면, 즉 유일하다면
			printf("%c", distance(al[1], find(al[1], al[1] + 26, small) + 'A'));  // 그 최댓값의 넘버링을 찾아서 대문자로 출력
	}																			// 배열이 al[1][0]~ al[1][25] 까지 있으므로

	else if (small == 0 || big> small)	// 대문자만 신경써야 할 때, 즉, 소문자가 하나도 없거나 대문자의 최댓값이 더 클 때
	{
		if (count(al[0], al[0] + 26, big) > 1)	// 대문자의 최댓값의 갯수가 여러개라면 (즉, AACCB 같은 경우 )
			printf("?");  // ? 출력

		else              // 최댓값이 유일하다면
			printf("%c", distance(al[0], find(al[0], al[0] + 26, big) + 'A')); // 그 최댓값의 넘버링을 찾아서 대문자로 출력
	}

	else if (big == small)  // 대문자와 소문자의 최댓값이 같다면 즉, 어떤 알파벳인지는 모르지만 어쨋든 최대 갯수가 같으므로 무조건 ? 출력
		printf("?");

		


	
}