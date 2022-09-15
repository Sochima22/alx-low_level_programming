#include"main.h"
/**
*print_most_numbers-main entry*
*Description:to print most munbers*
*/
void print_most_numbers(void)
{int c;
	for (c = 0; c <= 9; c++)
	{_putchar((c % 10) + '0');
		if (c == 2 || c == 4)
		continue; }
		_putchar('\n'); }
