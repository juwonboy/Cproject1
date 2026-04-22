#include<stdio.h>
#include<string.h>
int main() {
	char str[80] = "dream";
	int count = 0;
	int i = 0;

	while (str[i] != '\0') {
		count++;
		i++;
	}

	printf("배열에 저장된 문자열의 길이 : %d\n", count);
	printf("%d", strnlen(str));

	return 0;
}
