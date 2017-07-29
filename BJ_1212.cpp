#include <iostream>
#include <vector>
#include <cstring>


using namespace std;
char arr[333335];

vector<int> bi;

int check = 2;
int main()
{
	scanf("%s", arr);
	if (atoi(arr)==0)
	{
		printf("0");
		return 0;
	}
	for (int i = 0; i < strlen(arr); i++)
	{

		while (arr[i]-'0' != 1)
		{
			bi.push_back((arr[i]-'0')%2);
			arr[i] = ((arr[i]-'0') / 2)+'0';
		}
		if(arr[i]-'0'==1)
			bi.push_back(arr[i]-'0');

		printf("asdf : %d\n", bi.size());

		for (int j = bi.size()-1; j>=0; j--)
		{
			printf("%d", bi[j]);
		}
	}
	
}