#include<stdio.h>

int main() {
	int num1 = 3, num2 = 4;
	double divResult;

	divResult = (double)num1 / num2;

	printf("³ª´°¼À °á°ú : %lf\n", divResult);
	
	printf("num1 º¯¼öÀÇ Å©±â : % zd\n", sizeof(num1));

	return 0;
}

/*
#include<stdio.h>
int main() {

	printf("\u250C\u252C\u2510\n");
	printf("\u250C\u252C\u2510\n");

	return 0;
}
*/