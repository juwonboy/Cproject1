#include<stdio.h>

int main() {

	// 1.
	printf("00 :: 12345678901234567890\n");

	printf("01 :: %10c%c\n", 'A','B');
	printf("02 :: %-10c%c\n", 'A','B');

	printf("03 :: %10d\n", 2026);
	printf("04 :: %010d\n", 2026);
	
	printf("05 :: %+d\n", 128);
	printf("06 :: %#x\n", 2026); //16진수 , 0x7e9
	printf("07 :: %x\n", 2026); //16진수 , 7ea
	
	printf("09 :: 7ea:%lf\n", 0x7d5);
	printf("10 :: 0x7e9:%d\n", 0x7d5);


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