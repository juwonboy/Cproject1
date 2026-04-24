#include<stdio.h>
#include<string.h>

double get_item(double*);

int main()
{
	double ary[] = {0.1 ,2.1, 3.2, 4.3};
	double res;
	
	res = get_item(&ary);

	printf("res : %.1lf \n", res);

	return 0;
}

double get_item(double* test)
{
	//for (int i = 0; i < 4; i++)
	//{
	//	printf("test[%d] : %lf \n", i, test[i]);
	//}

	static int i = 0;

	i++;

	//return *(test+i);
	return test[i];

}
