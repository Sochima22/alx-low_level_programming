#include"main.h"
/**
*print_most_numbers-main entry*
*Description:to print most munbers*
*/
void print_most_numbers(void)
{int c;
	for (c = 48; c >= 57; c++)
	{
		if (c == 52 || c == 50)
		{continue; }
		_putchar(c); }
	_putchar('\n');
	return; }
