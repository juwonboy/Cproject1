#include<stdio.h>

double get_next(double*);
double get_before(double*);

int i; // default 0

int main()
{
	double ary[] = { 0.1,0.3,0.5,0.7,0.9 };
	//i++;
	printf("next호출:%.1lf\n", get_next(&ary)); // 0.1
	//i++;
	printf("next호출:%.1lf\n", get_next(&ary)); // 0.3
	//i++;
	printf("before호출:%.1lf\n", get_before(&ary));// 0.5
	//i++;
	printf("before호출:%.1lf\n", get_before(&ary)); // 0.3

	printf("i:%d\n", i);

	return 0;
}

double get_next(double* test1)
{
	i++;
	return test1[i - 1];
}

double get_before(double* test2)
{
	i++;
	return test2[i - 1];
}
