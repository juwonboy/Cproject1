#include<stdio.h>

int main()
{
	int i, j;
	int temp;
	//int row_order[4][5]; 
	int row_order[5][4];
	int row_order2[5][2];

	temp = 0;
	/*
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 5; j++) {
				row_order[i][j] = temp;
				temp++;
			}
		}

		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 5; j++) {
				printf("%d", row_order[i][j]);
			}
			printf("\n");
		}
		*/

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++) {
			temp++;
			row_order[j][i] = temp;
		}
	}

	for (j = 0; j < 5; j++) {
		printf("\t%d¿­\t|", j + 1);
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++) {
			printf("\t%d\t|", row_order[i][j]);
		}
		printf("\n");
	}

	/*
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++) {
			row_order2[i][j] = temp;
			temp++;
		}
	}


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 2; j++) {
			printf("\t%d", row_order2[i][j]);
		}
		printf("\n");
	}
	*/

	return 0;
}