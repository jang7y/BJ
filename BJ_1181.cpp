#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

vector<pair<int, string> > arr;
vector<string>check;
string st;
int cnt = 0;
int T;
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		cin >> st;

		if (count(check.begin(), check.end(), st))
			continue;
		check.push_back(st);
		arr.push_back({ st.size(), st });
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].second << endl;
	}
}