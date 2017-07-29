#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

#include <cstring>


using namespace std;

vector<string> A;
vector<string>B;
int n, m;
int arr[100];
int sum = 0;
int sol = 0;
//string temp;
int check = 0;
int b = 0;
char temp[21];
string s1;

set<string> set1;

int main()
{
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		cin>>s1;
		set1.insert(s1);
	}


	for (int i = 0; i < m; i++)
	{
		cin >> s1;
		
		if (set1.count(s1))
		{
			sum++;
			B.push_back(s1);			
		}

	}
	sort(B.begin(), B.end());

	printf("%d\n", sum);
	for (int i = 0; i < B.size(); i++)
	{
		cout << B[i] << endl;
	}

	
}