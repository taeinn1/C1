#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[6] = { 1,2,3,4,5,6 }, arr2[6] = { 7,8,9,10,11,12 };
	int* cha1 = arr1;
	int* cha2 = arr2;
	int temp;

	for (int i = 0; i < 6; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	
	printf("arr1: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	printf("\n");

	printf("arr2: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
}