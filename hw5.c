#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void two(int n) 
{
	if (n / 2 != 0) 
	{
		two(n / 2);
	}
	printf("%d", n % 2);
}

int main()
{
	int num;
	printf("2������ �ٲ� 10������ �Է��ϼ���: ");
	scanf("%d", &num);
	two(num);

	return 0;
}
