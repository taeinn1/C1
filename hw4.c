#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int cnt = 0;
	printf("Please enter a number :");
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		printf("It is a prime number");
	}
	else
		printf("It is not a prime number");
}