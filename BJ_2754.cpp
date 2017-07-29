#include <iostream>
#include <cstring>

using namespace std;

double jum[] = { 4.0, 3.0, 2.0, 1.0 ,0.0};
char grade[5];
double JJ = 0;
int main()
{
	scanf("%s", grade);
	JJ = jum[grade[0] - 'A'];
	if (grade[0] != 'F')
	{	
		
		if (grade[1] == '+')
		{
			JJ +=  0.3;
		}

		else if (grade[1] == '-')
		{
			JJ -=  0.3;
		}
	}
	printf("%.1lf", JJ);


}