#include<stdio.h>
#include"main.h"
/**
*jack_bauer- print every minute of the day of jack bauer*
*starting from 0:00 to 23:59
*/
void jack_bauer(void)
{int i;
	int j;

	i = 0;

	while (i <= 11)
	{j = 0;
		while (j < 60)
		{_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(';');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}}

