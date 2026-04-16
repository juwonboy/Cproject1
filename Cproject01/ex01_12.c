#include<stdio.h>

/*
	char(1byte): 128~127,0~255
	int(4byte): -2147483648~2147483647
*/
int main() {

	char ch = 'a';
	int num = 2147483650;

	printf("%d\n",ch); 
	printf("%c\n",ch);
	printf("%d\n",num);

	printf("%d\n",2342.234234);

	printf("%d\n", '0');

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'z', ch4 = 90;

	printf("ch1 = %c, ch2 = %d, ch3 = %c, ch4 = %d \n ", ch1, ch2, ch3, ch4 );

	return 0;
}