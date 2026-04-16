
#include<stdio.h>

void print_star(int);

int main() {
	int num;
	printf("출력 별수 : ");
	scanf_s("%d",&num);

	print_star(num);

	return 0;
}

void print_star(int num1)
{
	for ( int i = 0; i < num1 ; i++)
	{
		printf("%d : *\n",i+1);
	}

}

