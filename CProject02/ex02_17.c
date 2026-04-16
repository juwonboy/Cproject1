#include<stdio.h>

int main() {

	char sel;

	puts("M 오전, A 오후 , E 저녁");
	puts("해당하는 영문을 입력하세요.");

	scanf_s("%c", &sel,1);

	//switch ~ case
	switch (sel) {
		case 'M':
		case 'm':
			puts("M 오전");
			break;
		case 'A':
		case 'a':
			puts("A 오후");
			break;
		case 'E':
		case 'e':
			puts("E 저녁");
			break;
		default:
			puts("해당문자 없음.");
	}

	return 0;
}