#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int aa[5], odd[5], even[5];
	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &aa[0], &aa[1], &aa[2], &aa[3], &aa[4]);

	printf("Odd numbers: ");
	for (int i = 0; i < 5; i++)
		if (aa[i] % 2 == 1)
			printf("%d ", aa[i]);
	printf("\n");

	printf("Even numbers: ");
	for (int i = 0; i < 5; i++)
		if (aa[i] % 2 == 0)
			printf("%d ", aa[i]);
}