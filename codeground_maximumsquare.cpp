

#include <iostream>
#include <vector>

using namespace std;

int arr[101][101];

int Answer;
int a,
int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		scanf("%d", &a);


		
		cout << "Case #" << test_case + 1 << endl;
		setbuf(stdout, NULL);
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}