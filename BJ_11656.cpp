#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;



vector<string>arr;
string temp;
string T;
int main()
{

	getline(cin, temp);

	for (int i = 0; i < temp.size(); i++)
	{
		arr.push_back(temp.substr(i));
	
	}
	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << endl;


}