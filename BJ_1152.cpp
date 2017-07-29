#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>

using namespace std;

char arr[1000001];
int sol = 0;
char a, b;
int check;
string st;
const char * temp;

char* cut;



int main()
{
	getline(cin, st);

	
	temp = st.c_str();
	
	
	strcpy(arr, temp);


	cut=strtok(arr, " ");
	while (cut)
	{
	//	cout << cut << endl;
		cut= strtok(NULL, " ");
		sol++;
	}
	printf("%d", sol);
	

}