#include<stdio.h>
int main() {

	int height;
	int weight;
	int cha;

	height = 168;
	weight = 48;

	cha = height - weight; 

	printf("======================================\n");
	printf("Å°		: %d cm\n", height); // Å° : 168 cm
	printf("======================================\n");
	printf("¸ö¹«°Ô		: %d kg\n", weight); //¸ö¹«°Ô : 48 kg
	printf("======================================\n");
	printf("Å°¿¡¼­ ¸ö¹«°Ô¸¦ »« °ªÀº %dÀÔ´Ï´Ù.\n", cha); //¸ö¹«°Ô : 48 kg
	printf("======================================\n");

	return 0;
}