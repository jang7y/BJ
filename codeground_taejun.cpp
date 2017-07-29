/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>

using namespace std;

int Answer;

int a, b, d;
int main(int argc, char** argv)
{
	int T, test_case;


	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		scanf("%d %d %d", &a, &b, &d);

		Answer = 0;
	//	while (1)
	//	{
			
			d -= a;
			a -= b;
			
			Answer++;
			
			Answer += d / a;
			if (d%a != 0)
				Answer++;

			printf("Case #%d\n", test_case + 1);
			printf("%d\n", Answer);
			setbuf(stdout, NULL);
		//	break;

			/*
			d -= a;
			Answer++;
			if (d <= 0)
			{
				printf("Case #%d\n", test_case + 1);
				printf("%d\n", Answer);
				setbuf(stdout, NULL);
				break;
			}
			d += b;
			*/
		//}
	}

	return 0;//Your program should return 0 on normal termination.
}