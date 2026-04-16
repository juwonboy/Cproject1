#include<stdio.h>

int main() {

	printf("%12345678901234567890\n");

	printf("%c\n",'A');
	printf("%d\n",128);
	printf("%10c\n",'1');

	printf("%10lf\n",3.141519);
	printf("%10le\n",3.141519);
	printf("%10.3lf\n",3.141519);


	return 0;

}

/*
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", n);

	return 0;
}
*/