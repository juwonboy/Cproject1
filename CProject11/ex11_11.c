#include<stdio.h>
#include<string.h>

void exchange(char*, void*, void*);

int main()
{
    int a = 10, b = 20;
    double da = 1.5, db = 2.5;

    exchange("int",  &a, &b);
    printf("정수값 교환 gn : %d,%d \n", a, b);

    exchange("double", &da, &db);
	printf("실수값 교환 gn : %.2lf, %.2lf \n", da, db);

    return 0;
}

void exchange(char* a, void* b, void* c)
{

    if(strcmp(a, "int") == 0) {
        int temp = *(int*)b;
        *(int*)b = *(int*)c;
        *(int*)c = temp;
    }

	if (strcmp(a, "double") == 0) {
        double temp = *(double*)b;
        *(double*)b = *(double*)c;
        *(double*)c = temp;
    }
    
    /*
    if (sizeof(b) == 8) {
    }

    if (sizeof(c) == 8) {
    }
    */
}
