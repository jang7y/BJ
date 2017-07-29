/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <vector>


using namespace std;

int Answer;
int city[201][201];
int pa[201];
int temp = 1;
int N, M;

int DFS(int);
int main(int argc, char** argv)
{
	int T, test_case;
	int a, b;
	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		
		Answer = 0;
		scanf("%d", &N);
		scanf("%d", &M);
		for (int i = 0; i < M; i++)
		{
			scanf("%d %d", &a, &b);
			city[a][b]=1;
			//city[b][a]=1;
		}


		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (city[i][j] == 1)
				{
					DFS(i);
				}
			}
		}

		
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}

int DFS(int a, int c)
{
	
	if (pa[a] == 0)
		pa[a] = temp;

	if (pa[a])
	
	temp = temp*(-1);
	
	for (int i = 1; i <= N; i++)
	{
		if (city[a][i] == 1)
			DFS(i);
	}

	

	
}