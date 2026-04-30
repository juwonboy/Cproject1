#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void selectSortOne(int* arr, int n);
void selectSortTwo(int* arr, int n);

int main() {

	int n, i;
	int* arr;
	n = 0;

	printf("배열의 길이를 입력하세요:");

	scanf_s("%d", &n);

	arr = (int*)malloc(sizeof(int) * n); // 4byte * n
	
	printf("\n%d개의 정수를 입력하세요.");

	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	selectSortTwo(arr,n);

	for ( i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

void selectSortOne(int* arr, int n) {

	int j, i, temp;

	for (i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
	}
}

void selectSortTwo(int* arr, int n) {

	int j, i, temp;

	for (i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}