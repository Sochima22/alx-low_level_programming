#include<stdio.h>
#include"main.h"
/**
*print_alphabet_x10- Main entry*
*Description: funtions prototypes*
*Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{int ch;
	int i = 48;
	while (i <= 57)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++
		}
	return; }

