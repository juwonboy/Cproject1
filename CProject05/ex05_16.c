#include<stdio.h>

int main() {

	char str[50] = "I like C programming";
	int i = 0;

	// 널문자가 있으면끝으로 인식
	printf("1 : string:%s\n",str);
	str[8] = '\0';

	printf("2 : string:%s\n", str);
	
	str[6] = '\0';
	printf("3 : string:%s\n", str);

	str[1] = '\0';
	printf("1 : string:%s\n", str);


	printf("\n\n\n\nfor==========================================start\n");
	while ( i < (sizeof(str) / sizeof(str[0]))) {	
		printf("%d : string : %c\t\n",i ,str[i]);
		i++;
	}
	printf("for==========================================end");

	return 0;
}
