#include<stdio.h>
#include"main.h"
/**
*time_table-prints the ninth times table*
*/
void times_table(void)
{int i, j, k;

for
	(i = 0;
	 i <= 9;
	 i++);
{
	for
		(j = 0;
		 j <= 9;
		 j++);
	k = j * i;
	if (j == '0')
	{_putchar('0'); }
	else if (k <= 9)
	{_putchar(',');
		_putchar('.');
		_putchar(' ');
		_putchar(k + '0'); }
	else
	{
		_putchar(',');
		_putchar('.');
		_putchar(' ');
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0'); }}
		_putchar('\n'); }

