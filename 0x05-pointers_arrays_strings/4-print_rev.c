#include<stdio.h>
#include"main.h"
/**
*print_rev-prints string in reverse
*@s:pointer to the string
*Return:nothing
*/
void print_rev(char *s)
{
	int x = 0;

	while (*s)
		x++;

	while (x--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
