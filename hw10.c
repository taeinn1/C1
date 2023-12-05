#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct city
{
	char Name[10];
	char Country[30];
	int Population;
}city;

int main()
{
	city arr[3];

	printf("Input three cities:\n");
	for (int i=0; i < 3; i++)
	{
		printf("Name> ");
		scanf("%s", arr[i].Name);
		printf("Country> ");
		scanf("%s", arr[i].Country);
		printf("Population> ");
		scanf("%d", &arr[i].Population);
	}

	printf("Printing thr three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people\n",i+1,arr[i].Name,arr[i].Country,arr[i].Population);
	}
}