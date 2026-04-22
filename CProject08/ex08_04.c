#include<stdio.h>
#include<string.h>

/*
strawberry
trawberry
rawberry
awberry
wberry
berry
rry
ry
y
*/

int main() {
	
	char* test = "strawberry";
	
	printf("%d \n",strlen(test));
	int i;
	i = 0;
	
	while (test[i] != '\0') {
		printf("%s\n", test+i);
		i++;
	}

	return 0;
}
