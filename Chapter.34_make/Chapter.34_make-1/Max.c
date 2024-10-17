#include <stdio.h>

int data_input()
{
	int a;
	printf("Insert:");
	scanf("%d", &a);
	return a;
}
int comp(int a, int b)
{
	if (a > b)	return a;
	else if (a < b)	return b;
	else	return 0;
}
void data_print(int Max)
{
	printf("Max_Value = %d\n", Max);
}
