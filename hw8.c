#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>

void cal(double pa[])
{

	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += pa[i];
	}
	double mean = sum / 5;

	sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += pow(pa[i] - mean, 2);
	}
	printf("Standard Deviation = %.3f", sqrt(sum / 5));

}


int main()
{
	double num[5];
	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &num[0], &num[1], &num[2], &num[3], &num[4]);
	cal(num);

}