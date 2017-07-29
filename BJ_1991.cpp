#include <iostream>

using namespace std;

typedef struct tree
{
	char left, right;
}Tree;

tree T[99];
int num;

void preorder(char);
void inorder(char);
void postorder(char);
int main()
{
	scanf("%d", &num);
	while (num--)
	{
		char a, b, c;
		scanf("\n%c %c %c", &a, &b, &c);
//		printf("¤±¤¤¤·¤© : %c %c %c\n", a, b, c);

		T[a].left = b;
		T[a].right = c;
	}

	preorder('A');
	printf("\n");
	inorder('A');
	printf("\n");
	postorder('A');
	
}

void preorder(char a)
{
	if (a != '.')
	{
		printf("%c", a);
		preorder(T[a].left);
		preorder(T[a].right);
	}
}


void inorder(char a)
{
	if (a != '.')
	{
	inorder(T[a].left);
	printf("%c", a);

	inorder(T[a].right);

	}
}


void postorder(char a)
{
	if (a != '.')
	{
	postorder(T[a].left);
	postorder(T[a].right);
	printf("%c", a);
	}
}