#include<stdio.h>

int main() {

	int n;
	int i;

	printf("양수를 입력하세요:");
	scanf_s("%d", &n);

	i = 0;
	while (i < n) {
		printf("@");
		i++;
	}
	printf("\n%d개 찍힘",i);

	return 0;
}

/*
#include<stdio.h>
int main() {
	int a;

	scanf_s("%d", &a);
	printf("%d %d %d", a,a,a);
	return 0;

}*/
