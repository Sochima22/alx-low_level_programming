#include<stdio.h>
#include"main.h"
/**
*main-computes and prints sum of all multiples*
*Description:sum of multiples of 3 or 5below 1024*
*Return:always 0 (success)
*/
int main(void)
{unsigned long int
	sum3, sum5, sum;
	int i;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + 1; } else if ((i % 5) == 0)
			{
				sum5 = sum5 + 1; }}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0); }
