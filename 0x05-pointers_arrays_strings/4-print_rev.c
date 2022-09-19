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
	int i = 0;

	while (*s[i++])
		x++;
	for (i = x - 1; i >= 0; i++)

		_putchar(*s);

	_putchar('\n');
}
