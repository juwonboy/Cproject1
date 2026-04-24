#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
동적(Dynamic or Run-time)이라는 말은 빌드(컴파일+링크)된 바이너리
프로그램이 실행되고 있는 도중을 말하는 것이다
변수로 선언된 메모리는 컴파일 타임에 그에 대한 메모리 관리가
자동으로 이루어진다(int a : 4byte,memory : stack)
동적으로 할당하는 메모리는 Heap(힙)이라는 메모리 영역에
할당된다
메모리의 동적 할당은 전용함수를 이용하는 것이며,존재하지
않는 메모리가 생기는 것이 아니라 운영체제로부터 사용을
허가 받는 것이다
동적 할당한 메모리는 반드시 운영체제에 반환해야 한다
*/

int main()
{
    int* ip = NULL;
    double* dp = NULL;

    ip = (int*)malloc(sizeof(int)); // 4byte
    dp = (double*)malloc(sizeof(double)); // 8byte

    if(ip == NULL || dp == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

     *ip = 10;
     *dp = 1.5;

     printf("정수형으로 사용 ip : %d  \n", *ip);
     printf("실수형으로 사용 dp : %.2lf \n", *dp);

	 // 힙 영역은 프로그램이 종료될 때까지 메모리 공간에 유지된다.
	 // 따라서 동적 할당한 메모리는 프로그램이 종료될 때까지 사용이 가능하다.

     free(ip);
     free(dp);

    return 0;
}
