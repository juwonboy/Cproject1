#include<stdio.h>
#include<stdlib.h>

// ¹®ÀÚ¿­Àº ¼öÁ¤ ºÒ°¡,ÀĞ±â Àü¿ë(read only data)
// Code Area(±â°è¾î ÄÚµå ÀúÀå,read-only)
// Data Area(Á¤Àû º¯¼ö,½ÇÇà ½ÃÀÛ½Ã ¸Ş¸ğ¸®¿¡ ·ÎµåµÊ)
// Heap Area(µ¿Àû ¸Ş¸ğ¸®,malloc/free)
// Stack(Áö¿ª º¯¼ö,ÇÔ¼ö È£Ãâ)

void exchange();


int main() {

	int cheoil = 0;
	cheoil = 100;

	// ÇÔ¼ö È£Ãâ(ÇÔ¼ö´Â È£­ŒÇØ¾ß ¸Ş¸ğ¸®¿¡¼­ ¸¸µé¾îÁö°í ½ÇÇàµÈ´Ù.)
	exchange();

	printf("ÇÔ¼ö°¡ È£ÃâµÈ ÈÄ¿¡ cheli¿¡ ÀúÀåµÈ °ª :%d\n",cheoil);

	return 0;

}

void exchange() {

	int cheoil;
	cheoil = 50;

}

