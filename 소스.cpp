#include< iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>* it;
	vector<int> v;
	it = &v;
	(*it).push_back(1);
	(*it).push_back(2);
	printf("%d %d", (*it)[0], (*it)[1]);

	

	
	
}