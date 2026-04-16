#include<stdio.h>

int main() {

	int nInput = 0;
	char chCredit = 'x';

	printf("점수를 입력하세요.\n");
	scanf_s("%d" , &nInput);

	// A 90 B 80 C 70 D 60

	if (nInput >=90 ) {
		chCredit = 'A';
	}else if (nInput >= 80 ) {
		chCredit = 'B';
	}else if (nInput >= 70 ) {
		chCredit = 'C';
	}else if (nInput >= 60 ) {
		chCredit = 'D';
	}else {
		chCredit = 'F';
	}

	printf("Credit : %c", chCredit);


	return 0;
}