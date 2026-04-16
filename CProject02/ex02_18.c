#include<stdio.h>

int main() {

	int nInput = 0;
	char chCredit = 'x';


	printf("점수를 입력하세요.\n");
	scanf_s("%d", &nInput);


	/*
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
	*/
	//switch ~ case
	
	if (nInput >100 || nInput < 0) {
		printf("들어올수 없는 값");
		return 0;
	}



	//switch (nInput/10) {
	switch ((int)(nInput*0.1)) {
		case  10:
		case  9:
			chCredit = 'A';
			break;
		case  8:
			chCredit = 'B';
			break;
		case 7:
			chCredit = 'C';
			break;
		case 6:
			chCredit = 'D';
			break;
		default:
			chCredit = 'F';
	}
	printf("%c",chCredit);

	return 0;
}