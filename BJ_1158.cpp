#include<stdio.h>
#include<stdlib.h>
#define MAX 5000

void main() {
	int N, M, count, i, num;
	int ary[MAX] = { 0 };
	int solution[MAX];
	scanf_s("%d %d", &N, &M);
	count = 0;
	num = 0;
	for (i = 0;; i++)
	{
		i = i%N;


		if (ary[i] == 0)
		{
			num += 1;
		}

		if (((num%M) == 0) && (ary[i] == 0))
		{

			ary[i] = 1;
			solution[count] = (i + 1);
			count += 1;

		}
		if (count == N)
			break;
	}

	printf_s("<");
	for (i = 0; i < N; i++)
	{
		if (i == 0)
		{
			printf_s("%d,", solution[i]);
		}
		else if (i == (N - 1))
		{
			printf_s(" %d", solution[i]);
		}
		else
		{
			printf_s(" %d,", solution[i]);
		}
	}
	printf_s(">");
}
/*
#include <iostream>
#include <vector>


using namespace std;

vector<int> arr;
int a, b;
int index = 0;
int sol = 0;

int main()
{
	
	scanf("%d %d", &a, &b);
	arr.assign(a, 0);
	for (int i = 0; i < a; i++)
	{
		arr[i] = i + 1;
	}
	printf("<");
	if (a == 1)
	{
		printf("%d>", arr[0]);
		return 0;
	}
	index = b - 1;
	while (1)
	{

		if (index >= arr.size())
		{
			index = index% arr.size();
		}
		if (arr[index] !=0)
		{
			printf("%d, ", arr[index]);
			sol++;
			arr.erase(arr.begin() + index);

			index = index + b-1;

		}

		
		if (sol == a-1)
			break;
	}
	printf("%d>", arr[0]);
	
}

*/