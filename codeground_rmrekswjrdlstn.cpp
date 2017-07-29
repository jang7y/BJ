/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>

using namespace std;

int coffee[21];
int Answer;
int M, N, money;
int temp = 0;
int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		for (int i = 0; i < 21; i++)
			coffee[i] = 0;
		scanf("%d %d %d", &M, &N, &money);
		for (int i = 0; i < M; i++)
		{
			scanf("%d", &temp);
			coffee[temp]++;
		}
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &temp);
			money -= coffee[i + 1] * temp;
		}

		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		Implement your algorithm here.
		The answer to the case will be stored in variable Answer.
		*/
		/////////////////////////////////////////////////////////////////////////////////////////////

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		if (money < 0)
			printf("N\n");
		else
			printf("Y\n");
		//cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}