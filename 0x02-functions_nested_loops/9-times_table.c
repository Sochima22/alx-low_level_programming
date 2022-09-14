#include<stdio.h>
#include"main.h"
/**
*time_table-prints the ninth times table*
*description:i dont know*
*/
void times_table(void)
{int i, j, k;

for
	(i = 48;
	 i <= 57;
	 i++);
{
	for
		(j = 48;
		 j > 48;
		 j++);
	{
		k = j * i;
		if (j == 0)
		{_putchar(k + '0'); }
		if (k <= 9 && j != 0)
{_putchar(',');
_putchar('.');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}}
_putchar('\n'); }}
