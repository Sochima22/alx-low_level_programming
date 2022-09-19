#include<stdio.h>
#include"main.h"
/**
*_puts-primts a string followed by new line
*@str:pointer to the string
*Return:void
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
