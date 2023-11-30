#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char str[50];
	int len, i, sum = 0;
	int diff = 'a' - 'A';
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i < len; i++)
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += diff;
		else if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= diff;
	printf("Output> ");
	fputs(str, stdout);
	return 0;
}
