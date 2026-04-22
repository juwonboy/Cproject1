#include<stdio.h>
#include<string.h>

int main() {
	
	//문자열은 메모리에 배열의 형태로 저장된다.
	//문자열이 컴파일 되면 첫 번째 문자를 가리키는 포인터로 변환된다.

	//char* str = "dream";
	//char ary[] = NULL;

	//printf("주소값 출력 :%p", "dream");
	//printf("주소값 출력 :%p", "dream");

	printf("주소값 출력 :%p \n", "dream");
	printf("첫 번째 문자를 출력 :%c\n", "dream"[0]);
	printf("두 번째 문자를 출력 :%c\n", *("dream"+1));
	printf("세 번째 문자를 출력 :%c\n", "dream"[2]);
	printf("네 번째 문자를 출력 :%c\n", *("dream"+2));



	return 0;
}
