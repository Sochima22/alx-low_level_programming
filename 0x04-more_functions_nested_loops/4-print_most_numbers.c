#include"main.h"
/**
*print_most_numbers-print most numbers*
*Description:to print most numbers
*/
void print_most_numbers(void)
{int c;
	for (c = 48; c <= 58; c++)
	{
		if (c == 50 || c == 53)
		{
			continue;
		}
		_putchar(c); 
	}
	_putchar(10);
