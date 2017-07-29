#include <iostream>

using namespace std;

int T;
int p1 = 0;
int p2 = 0;
char cp1;
char cp2;
int M;
int main()
{
	scanf("%d\n", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d\n", &M);
		for (int j = 0; j < M; j++)
		{
			scanf(" %c %c", &cp1, &cp2);
			if (cp1 == 'P' && cp2 == 'R')
				p1++;
			else if (cp1 == 'R' && cp2 == 'P')
				p2++;
			else if (cp1 == 'R' && cp2 == 'S')
				p1++;
			else if (cp1 == 'S' && cp2 == 'R')
				p2++;
			else if (cp1 == 'P' && cp2 == 'S')
				p2++;
			else if (cp1 == 'S' && cp2 == 'P')
				p1++;

		}
		if (p1 > p2)
			printf("Player 1\n");
		else if (p2 > p1)
			printf("Player 2\n");
		else if (p1 == p2)
			printf("TIE\n");

		p1 = p2 = 0;
	}
}